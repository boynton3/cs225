#include "StickerSheet.h"
#include "Image.h"

#include <iostream>

using namespace cs225;
using namespace std;

//this could cause issues
StickerSheet::StickerSheet(const Image &picture, unsigned max) {
    sticker_sheet = new Image*[max];
    //setting up stickersheet stuff
    max_ = max;
    x_ = new unsigned[max];
    y_ = new unsigned[max];

    //making a new picture to be put into the sheet
    picture_ = picture;
    //need to set initial picture info to blank
    for (unsigned i = 0; i < max_; i ++) {
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
    _destory();

    //like a copy of a copy
    //delete it first, copy it again, and return it
    _copy(other);

    return *this;

}

//Modifies the maximum number of stickers that can be stored on this
//StickerSheet without changing existing stickers' indices.
//If the new maximum number of stickers is smaller than the current
//number of stickers, the stickers with indices above max - 1 will be lost.

void StickerSheet::changeMaxStickers(unsigned max) {
    if (max == max_) {
        return;
    }

    Image** copyTo = new Image*[max];
    unsigned * copyX = new unsigned [max];
    unsigned  * copyY = new unsigned [max];

    if (max_ < max) {
        for (unsigned i = 0; i < max_; i ++) {
            copyTo[i] = sticker_sheet[i];
            copyX[i] = x_[i];
            copyY[i] = y_[i];
            
        }
        for (unsigned i = max_; i < max; i++) {
            copyTo[i] = NULL;
            copyX[i]=0;
            copyY[i] = 0;
        }
        max_ = max;
    } else {
        for (unsigned i = 0; i < max; i++) {
            copyTo[i] = sticker_sheet[i];
            copyX[i] = x_[i];
            copyY[i] = y_[i];
        }
        for (unsigned i = max; i < max_; i++) {
            delete sticker_sheet[i];
        }

    }
    delete[] sticker_sheet;
    sticker_sheet = copyTo;
    x_ = copyX;
    y_ = copyY;
    max_ = max;
}

//definitley won't work
int StickerSheet::addSticker(Image &sticker, unsigned x, unsigned y) {
    //if sticker can't be added (the image is full) then return -1
    // if ( sticker_sheet == NULL) {
    //     return -1;
    // }
    //otherwise, adda sticker to the stickersheet so that the top left
    //of the image is on the sticker sheet at x and y

    for (unsigned i = 0; i < max_; i++) {
        if (sticker_sheet[i] == NULL) {
            sticker_sheet[i] = new Image(sticker);
            x_[i] = x;
            y_[i] = y;

            
            return i;
        }
    }
    return -1;
}

//lets hope this works
bool StickerSheet::translate(unsigned index, unsigned x, unsigned y) {
    //if the index is invalid, return false, otherwise change the x and y
    if (index >= max_ || sticker_sheet[index] == NULL) {
        return false;
    } else {
        x_[index] = x;
        y_[index] = y;
        return true;
    }
    return false;

}

//Might need to fix to check for Null
void StickerSheet::removeSticker(unsigned index) {
    //might need to null check, who knows
    if (index >= max_ || sticker_sheet[index] == NULL) {
        return;
    } else {
        delete sticker_sheet[index];
        sticker_sheet[index] = NULL;
    }
    return;
}

//getting there
Image * StickerSheet::getSticker(unsigned index) const {
    //need to check if index is invalid

    if (index > max_ || sticker_sheet[index] == NULL) {
        return NULL;
    }
    return sticker_sheet[index];
}

Image StickerSheet::render() const {

    unsigned origW = picture_.width();
    unsigned origH = picture_.height();

    // std::cout << "Originial Width:" << origW << std::endl;
    // std::cout << "Original Height" << origH << std::endl;
 
    unsigned w = picture_.width();
    unsigned h = picture_.height();

    for (unsigned i = 0; i < max_; i ++) {
         //std::cout << "a" << std::endl;
        if (sticker_sheet[i] != NULL) {
             //std::cout << "b" << std::endl;
            
            unsigned testx = sticker_sheet[i]->width()+x_[i];
            unsigned testy = sticker_sheet[i]->height()+y_[i];

            if (testx >= w) {
                w = testx;
            }
            if (testy >= h) {
                h = testy;
            }
        }
    }

    // std::cout << "New image width: " << w << std::endl;
    // std::cout << "New image height: " << h << std::endl;
    
    //std::cout << " c" << std:: endl;
    Image output(w,h);

    

    for (unsigned x = 0; x < origW; x++) {
        for (unsigned y = 0; y < origH; y++) {
            HSLAPixel & pix = output.getPixel(x,y);
            pix = picture_.getPixel(x,y);
        }
    }

    for (unsigned i = 0; i < max_; i++) {
        if (sticker_sheet[i] != NULL) {
            for (unsigned x = x_[i]; x < x_[i] + sticker_sheet[i]-> width(); x++) {
        //std::cout << " d" << std:: endl;

                for (unsigned y = y_[i]; y < y_[i] + sticker_sheet[i]->height(); y++) {
                //std::cout << " e" << std:: endl;

                    HSLAPixel & pix = output.getPixel(x,y);
                    //std::cout << " e" << std:: endl;
                    HSLAPixel &  bas = sticker_sheet[i] -> getPixel(x - x_[i], y - y_[i]);
                    //std::cout << " f" << std:: endl;
                    if (bas.a != 0) {
                        pix = bas;
                    }
                }
            }
        }
    }

    return output;

}


//HELP ME (functions)
//possible that I royally screwed the pooch on this one
void StickerSheet::_copy(const StickerSheet& other) {
    max_ = other.max_;
    picture_ = other.picture_;
    sticker_sheet = new Image*[max_];
    x_ = new unsigned [max_];
    y_ = new unsigned [max_];

    for (unsigned i = 0; i < other.max_; i++) {
        if (other.sticker_sheet[i] == NULL) {
            sticker_sheet[i] = NULL;

        } else {
            sticker_sheet[i] = new Image(*(other.sticker_sheet[i]));
            x_[i] = other.x_[i];
            y_[i] = other.y_[i];
        }

    }

}
//should be donevalgr
void StickerSheet::_destory() {
    if (sticker_sheet != NULL) {
         for (unsigned i = 0; i < max_; i ++) {
             delete sticker_sheet[i];
             sticker_sheet[i] = NULL;
         }
    }

    //delete the base picture
    //delete picture_;
    //remove all x and y stuff
    delete[] sticker_sheet;
    sticker_sheet = NULL;

    delete[] x_;
    x_ = NULL;
    delete[] y_;
    y_ = NULL;
    //remove all stickers



}
