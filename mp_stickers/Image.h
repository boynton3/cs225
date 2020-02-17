/**
 * @file Image.h
 * Contains your declaration of the interface for the Image class.
 */

#pragma once
#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

using namespace std;

class Image : public cs225::PNG {
    public:
    Image();
    Image(unsigned width, unsigned height);
    //Image(Image const &other);

    void lighten();
    void lighten(double amount);
    void darken();
    void darken(double amunt);
    void saturate();
    void saturate(double amount);
    void desaturate();
    void desaturate(double amount);
    void grayscale();
    void rotateColor(double degrees);
    void illinify();
    void scale(double factor);
    void scale(unsigned w, unsigned h);

    //set up default constructor and etc bs
    // Image();
    // ~Image();
    // Image(const Image &other);
    //Image const & operator=(Image const & other);
    // Image(unsigned width, unsigned height);

};
