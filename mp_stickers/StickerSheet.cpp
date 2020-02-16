#include "StickerSheet.h"

#include <iostream>

using namespace cs225;
using namespace std;

//this could cause issues
StickerSheet::StickerSheet(const Image &picture, unsigned max) {
    sticker_sheet = new Image*[max];
    //setting up stickersheet stuff
    ct_ = 0;
    max_ = max;
    x_ = new int[max];
    y_ = new int[max];

    //valids_ = new bool[max];

    //making a new picture to be put into the sheet
    picture_ = new Image(picture);
    //need to set initial picture info
    for (unsigned i = 0; i < max_; i ++) {
        x_[i] = 0;
        y_[i] = 0;
        sticker_sheet[i] = NULL;
    }

}

//done I think
StickerSheet::~StickerSheet(){
    _destory();

}

//done I think
StickerSheet::StickerSheet(const StickerSheet &other) {
    //make it easy by copying to other
    _copy(other);
}


//done I think
const StickerSheet & StickerSheet::operator=(const StickerSheet & other) {
    //like a copy of a copy
    //delete it first, copy it again, and return it
    _destory();
    _copy(other);
    return *this;

}

//Modifies the maximum number of stickers that can be stored on this 
//StickerSheet without changing existing stickers' indices.
//If the new maximum number of stickers is smaller than the current 
//number of stickers, the stickers with indices above max - 1 will be lost.

void StickerSheet::changeMaxStickers(unsigned max) {
    Image** copyTo = new Image*[max];
    int* copyX = new int[max];
    int* copyY = new int[max];

    //if its smaller, it should be lost
    for (unsigned i = 0; i < max; i++) {
        copyTo[i] = NULL;

    }

    for (unsigned i = 0; i < max_; i++) {
        //if it's not NULL, and less than the size of the imput image
        if (sticker_sheet[i] != NULL && i < max) {
            copyTo[i] = sticker_sheet[i];
            copyX[i] = x_[i];
            copyY[i] = y_[i];
        } else 
        //might need to be >=
        if (sticker_sheet[i] !=NULL && i >max) {
            delete[] copyTo;
            delete[] copyX;
            delete[] copyY;
        }
    }
    delete[] x_;
    delete[] y_;
    delete[] sticker_sheet;

    x_ = copyX;
    y_ = copyY;
    sticker_sheet = copyTo;

    max_ = max;
    return;

}

//definitley won't work
int StickerSheet::addSticker(Image &sticker, unsigned x, unsigned y) {
    //if sticker can't be added (the image is full) then return 0
    if ( sticker_sheet == NULL) {
        return -1;
    }
    //otherwise, adda sticker to the stickersheet so that the top left 
    //of the image is on the sticker sheet at x and y
    for (unsigned i = 0; i < max_; i++) {
        x_[i] = x;
        y_[i] = y;
        return i;
    }
    return -1;
}

//lets hope this works
bool StickerSheet::translate(unsigned index, unsigned x, unsigned y) {
    //if the index is invalid, return false, otherwise change the x and y 
    if (index > max_ || index == 0 || sticker_sheet[index] == NULL) {
        return false;
    } else {
        x_[index] = x;
        y_[index] = y;
    }
    return true;

}

//Might need to fix to check for Null
void StickerSheet::removeSticker(unsigned index) {
    //might need to null check, who knows
    delete sticker_sheet[index];
    sticker_sheet[index] = NULL;
    x_[index] = 0;
    y_[index] = 0;
    //ct_--;
}

//getting there
Image * StickerSheet::getSticker(unsigned index) {
    //need to check if index is invalid
    if (index > max_ || sticker_sheet[index] == NULL ) {
        return NULL;
    } 
    return sticker_sheet[index];
}

Image StickerSheet::render() const {

    unsigned copyX = picture_->width();
    unsigned copyY = picture_->height();

    for (unsigned i = 0; i < max_; i ++) {
        // std::cout << "hi" << std::endl;
        if (sticker_sheet[i] != NULL) {
            // std::cout << "ho" << std::endl;
            unsigned x = x_[i] + sticker_sheet[i]->width();
            unsigned y = y_[i] + sticker_sheet[i]->height();

            if (x > copyX) {
                copyX = x;
            }
            if (y > copyY) {
                copyY = y;
            }
        }
    }
    Image * copyTo = new Image(*picture_);
    copyTo->resize(copyX, copyY);
    //you're not done yet dummy

    for (unsigned i = 0; i < ct_; i ++) {
        if (sticker_sheet[i] != NULL) {
            for (unsigned x = x_[i]; x < sticker_sheet[i]->width(); x++) {
                for (unsigned y = 0; y < sticker_sheet[i]->height(); y++) {
                    HSLAPixel & pixel = copyTo->getPixel(x,y);
                    HSLAPixel & cop = sticker_sheet[i]->getPixel(x - x_[i], y-y_[i]);
                    if (cop.a !=0) {
                        pixel = cop;
                    }
                }
            }
        }
    }
    
    Image toReturn = *copyTo;
    delete copyTo;
    return toReturn;
}
//HELP ME
//possible that I royally screwed the pooch on this one
void StickerSheet::_copy(const StickerSheet& other) {
    max_ = other.max_;
    ct_ = other.ct_;
    picture_ = new Image(*(other.picture_));
    sticker_sheet = new Image*[max_];
    x_ = new int [max_];
    y_ = new int [max_];

    for (unsigned i = 0; i < max_; i++) {
        if (other.sticker_sheet[i] == NULL) {
            sticker_sheet[i] = NULL;
            x_[i] = other.x_[i];
            y_[i] = other.y_[i];

        } else {
            sticker_sheet[i] = new Image(*(other.sticker_sheet[i]));
        }

    }

}

//should be done
void StickerSheet::_destory() {
    for (unsigned i = 0; i < max_; i ++) {
        if (sticker_sheet[i] != NULL ) {
            delete sticker_sheet[i];
            sticker_sheet[i] = NULL;
        }
    }
    //delete the base picture
    //delete picture_;
    //remove all x and y stuff
    delete[] x_;
    x_ = NULL;
    delete[] y_;
    y_ = NULL;
    //remove all stickers
    delete[] sticker_sheet;
    sticker_sheet = NULL;


}