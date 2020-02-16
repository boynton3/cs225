/**
 * @file StickerSheet.h
 * Contains your declaration of the interface for the StickerSheet class.
 */
#pragma once
#include<iostream>
#include "Image.h"

class StickerSheet {
    public:

    //constructors/destructors
    StickerSheet(const Image &picture, unsigned max);
    ~StickerSheet();
    StickerSheet(const StickerSheet &other);
    
    //member functions
    const StickerSheet & operator=(const StickerSheet &other);

    void changeMaxStickers(unsigned max);
    int addSticker(Image &sticker, unsigned x, unsigned y);
    bool translate(unsigned index, unsigned x, unsigned y);
    void removeSticker(unsigned index);
    Image * getSticker(unsigned index);
    Image render() const;

    //following potd9
    //private:
    
    //must be a pointer
    //has a base picture that's put into the sheet
    Image* picture_;
    //sticker sheet made of an array of pictures
    Image** sticker_sheet;

    void _copy(const StickerSheet &);
    void _destory();


    //int * index_;

    unsigned max_;
    
    unsigned ct_;
    //must be pointers to delete
    int * x_;
    int * y_;    


};
