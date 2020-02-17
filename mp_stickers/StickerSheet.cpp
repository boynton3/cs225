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

    ct_ = 0;

    width_ = picture.width();
    height_ = picture.height();

    //making a new picture to be put into the sheet
    picture_ = picture;
    //need to set initial picture info
    for (unsigned i = 0; i < max_; i ++) {

        sticker_sheet[i] = NULL;
        x_[i] = 0;
        y_[i] = 0;

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
    unsigned * copyX = new unsigned  [max];
    unsigned  * copyY = new unsigned  [max];

    //if its smaller, it should be lost
    for (unsigned i = 0; i < max; i++) {
        copyTo[i] = NULL;

    }
    if (max < max_) {
    for (unsigned i = 0; i < max; i++) {
        //if it's not NULL, and less than the size of the imput image
        //if (sticker_sheet[i] != NULL && i < max) {
        copyTo[i] = sticker_sheet[i];
                 std::cout << "a" << std::endl;

        copyX[i] = x_[i];
                 std::cout << "b" << std::endl;

        copyY[i] = y_[i];
    }
    }
        // } else
        // //might need to be >=
        // if (sticker_sheet[i] !=NULL && i >max) {
        //     delete[] copyTo;
        //     delete[] copyX;
        //     delete[] copyY;
        //     copyTo[i] = NULL;
        // }
    if (max > max_) {
        for (unsigned i = max_; i <max; i++) {
                     std::cout << "c" << std::endl;

            copyTo[i] = NULL;
                     std::cout << "d" << std::endl;

        }
    }
    _destory();
    sticker_sheet = copyTo;
    x_ = copyX;
    y_ = copyY;

}

//definitley won't work
int StickerSheet::addSticker(Image &sticker, unsigned x, unsigned y) {
    //if sticker can't be added (the image is full) then return 0
    // if ( sticker_sheet == NULL) {
    //     return -1;
    // }
    //otherwise, adda sticker to the stickersheet so that the top left
    //of the image is on the sticker sheet at x and y
    if (ct_ >= max_) {
        return -1;
    }
    else {
        for (unsigned i = 0; i <= max_; i++) {
            if (sticker_sheet[i] == NULL) {
                sticker_sheet[i] = new Image(sticker);
                x_[i] = x;
                y_[i] = y;

                ct_ = ct_ + 1;
            return i;
            }
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
        ct_ = ct_ - 1;

        //_destory();
    }
    return;
    //ct_--;
}

//getting there
Image * StickerSheet::getSticker(unsigned index) const {
    //need to check if index is invalid

    // if (index > max_ || sticker_sheet[index] == NULL) {
    //     return NULL;
    // }
    return sticker_sheet[index];
}

Image StickerSheet::render() const {
    Image output;

    unsigned w = picture_.width();
    unsigned h = picture_.height();

    for (unsigned i = 0; i < max_; i ++) {
         //std::cout << "a" << std::endl;
        if (sticker_sheet[i] != NULL) {
             //std::cout << "b" << std::endl;
            w = std::max((int)sticker_sheet[i]->width()+x_[i],w);
            h = std::max((int)sticker_sheet[i]->width()+y_[i],h);
        }
    }
    // if (w ==0 || h == 0) {
    //     return picture_;
    // }
    
    output.resize(w, h);

    // for (unsigned i = 0; i < max_; i++) {
    //     if (sticker_sheet[i] != NULL) {
    for (unsigned x = 0; x < w; x++) {
    for (unsigned y = 0; y < h; y++) {
        HSLAPixel & pix = output.getPixel(x,y);
        pix = picture_.getPixel(x,y);
    }
    }
    for (unsigned i = 0; i < max_; i ++) {
        if (sticker_sheet[i] != NULL) {
            for (unsigned x = 0; x < sticker_sheet[i]->width(); x++) {
                for (unsigned y = 0; y < sticker_sheet[i]->height(); y++) {
                    //HSLAPixel & pixel = copyTo->getPixel(x,y);
                HSLAPixel & pix = sticker_sheet[i]->getPixel(x, y);
                if (pix.a !=0) {
                    HSLAPixel & cop = output.getPixel(x_[i] + x, y_[i] + y);
                    cop.h = pix.h;
                    cop.l = pix.l;
                    cop.s = pix.s;
                    cop.a = pix.a;
                }
            }
        }
    }
    }
    return output;

}

//     unsigned w_ = 0;
//     unsigned h_ = 0;
//     for (unsigned i = 0; i < max_; i++) {
//         if (sticker_sheet[i] != nullptr) {
//         w_ = (x_[i] + sticker_sheet[i]->width() > picture_.width()) ? x_[i] + sticker_sheet[i]->width() : picture_->width();
//         h_ = (y_[i] + sticker_sheet[i]->height() > picture_->height()) ? y_[i] + sticker_sheet[i]->height() : picture_->height();
//         }
//     }

//     if (w_ == 0 || h_ == 0) {
//         return *picture_;
//     }

//     Image outPut(w_, h_);

//     for (unsigned x = 0; x < w_; x++) {
//         for (unsigned y = 0; y < h_; y++) {
//             HSLAPixel & pixel = outPut.getPixel(x, y);
//             pixel = picture_->getPixel(x, y);
//         }
//     }

//     for (unsigned i = 0; i < max_; i++) {
//     if (sticker_sheet[i] != nullptr) {
//       for (unsigned x = 0; x < sticker_sheet[i]->width(); x++) {
//         for (unsigned y = 0; y < sticker_sheet[i]->height(); y++) {
//           HSLAPixel & basePixel = outPut.getPixel(x_[i] + x, y_[i] + y);
//           HSLAPixel & stickerPixel = sticker_sheet[i]->getPixel(x, y);
//           if (stickerPixel.a != 0) {
//             basePixel = stickerPixel;
//           }
//         }
//       }
//     }
//   }
//   return outPut;
// }



    //need a way to access picture width() and length()


//     unsigned maxX = width_;
//     unsigned maxY = height_;

//     for (unsigned i = 0; i < max_; i ++) {
//         // std::cout << "hi" << std::endl;
//         if (sticker_sheet[i] != NULL) {
//             // std::cout << "ho" << std::endl;
//             unsigned x = x_[i] + sticker_sheet[i]->width();
//             unsigned y = y_[i] + sticker_sheet[i]->height();

//             if (x > maxX) {
//                 maxX = x;
//             }
//             if (y > maxY) {
//                 maxY = y;
//             }
//         }
//     }
//     Image copyTo = Image(maxX, maxY);
//     //copyTo->resize(copyX, copyY);
//     //you're not done yet dummy

//     for (unsigned i = 0; i < max_; i ++) {
//         for (unsigned x = 0; x < picture_->width(); x++) {
//             for (unsigned y = 0; y < picture_->height(); y++) {
//                 HSLAPixel & bas = picture_->getPixel(x,y);
//                 HSLAPixel & newP = copyTo.getPixel(x,y);
//                 newP.h = bas.h;
//                 newP.l = bas.l;
//                 newP.s = bas.s;
//                 newP.a = bas.a;
//             }
//         }
//         if (ct_ == 0) {
//             return copyTo;
//         }
//         for (unsigned x = 0; x < sticker_sheet[i]->width(); x++) {
//             if (sticker_sheet[i] != NULL) {
//             for (unsigned y = 0; y < sticker_sheet[i]->height(); y++) {
//                 //HSLAPixel & pixel = copyTo->getPixel(x,y);
//                 HSLAPixel & pix = sticker_sheet[i]->getPixel(x, y);
//                 if (pix.a !=0) {
//                     HSLAPixel & cop = copyTo.getPixel(x_[i] + x, y_[i] + y);
//                     cop.h = pix.h;
//                     cop.l = pix.l;
//                     cop.s = pix.s;
//                     cop.a = pix.a;
//                 }
//                 }
//             }
//         }
//     }
//     return copyTo;

// }


//HELP ME
//possible that I royally screwed the pooch on this one
void StickerSheet::_copy(const StickerSheet& other) {
    //picture_ = other.picture_;
    max_ = other.max_;
    picture_ = other.picture_;
    sticker_sheet = new Image*[max_];
    x_ = new unsigned [max_];
    y_ = new unsigned [max_];
    ct_ = other.ct_;

    for (unsigned i = 0; i < other.max_; i++) {
        if (other.sticker_sheet[i] == NULL) {
            sticker_sheet[i] = NULL;

        } else {
            sticker_sheet[i] = new Image(*(other.sticker_sheet[i]));
            x_[i] = other.x_[i];
            y_[i] = other.y_[i];
        }
        // x_[i] = other.x_[i];
        // y_[i] = other.y_[i];

    }

}
//should be done
void StickerSheet::_destory() {
    // if (sticker_sheet != NULL) {
    //      for (unsigned i = 0; i < max_; i ++) {
    //          delete sticker_sheet[i];
    //          sticker_sheet[i] = NULL;
    //      }
    // }

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
