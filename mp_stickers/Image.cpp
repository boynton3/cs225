#include <iostream>
#include "Image.h"
#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

using cs225::HSLAPixel;
using cs225::PNG;

//namespace cs225 {

    //sneaky bogus constructors
    Image::Image() : cs225::PNG() {};
    Image::Image(unsigned width, unsigned height) : cs225::PNG(width, height){};
    //Image::Image(Image const & other) : cs225::PNG(other) {};

    //note: Can't just check if less than 0
    //if given value of 0.1, it will be out of range
    void Image::lighten() {
        for (unsigned i = 0; i < width(); i++) {
            for (unsigned j = 0; j < height(); j++) {
                cs225::HSLAPixel & pixel = getPixel(i,j);
                pixel.l = pixel.l + 0.1;
                if (pixel.l < 0) {
                    pixel.l = 0;
                }
                if (pixel.l > 1.0) {
                    pixel.l = 1.0;
                }
            }

        }
    }
    void Image::lighten(double amount){
        for (unsigned i = 0; i < width(); i++) {
            for (unsigned j = 0; j < height(); j++) {
                cs225::HSLAPixel & pixel = getPixel(i,j);
                if (pixel.l < 1.0) {
                    pixel.l = pixel.l + amount;

                }
                if (pixel.l > 1.0) {
                    pixel.l = 1.0;
                }
            }
        }
    }


    void Image::darken() {
        for (unsigned i = 0; i < width(); i++) {
            for (unsigned j = 0; j < height(); j++) {
                cs225::HSLAPixel & pixel = getPixel(i,j);
                pixel.l = pixel.l - 0.1;
                if (pixel.l < 0) {
                    pixel.l = 0;
                }
                if (pixel.l > 1.0) {
                    pixel.l = 1.0;
                }
            }
        }

    }
    void Image::darken(double amount) {
        for (unsigned i = 0; i < width(); i++) {
            for (unsigned j = 0; j < height(); j++) {
                cs225::HSLAPixel & pixel = getPixel(i,j);
                pixel.l = pixel.l - amount;

                if (pixel.l < 0) {
                    pixel.l = 0;
                }
                if (pixel.l > 1.0) {
                    pixel.l = 1.0;
                }
            }
        }
    }

    void Image::saturate(){
        for (unsigned i = 0; i < width(); i++) {
            for (unsigned j = 0; j < height(); j++) {
                cs225::HSLAPixel & pixel = getPixel(i,j);
                pixel.s = pixel.s + 0.1;
                if (pixel.s < 0) {
                    pixel.s = 0;
                }
                if (pixel.s > 1.0) {
                    pixel.s = 1.0;
                }
            }
        }

    }
    void Image::saturate(double amount){
        for (unsigned i = 0; i < width(); i++) {
            for (unsigned j = 0; j < height(); j++) {
                cs225::HSLAPixel & pixel = getPixel(i,j);
                pixel.s = pixel.s + amount;
                if (pixel.s < 0) {
                    pixel.s = 0;
                }
                if (pixel.s > 1.0) {
                    pixel.s = 1.0;
                }
            }
        }

    }
    void Image::desaturate(){
        for (unsigned i = 0; i < width(); i++) {
            for (unsigned j = 0; j < height(); j++) {
                cs225::HSLAPixel & pixel = getPixel(i,j);
                pixel.s = pixel.s - 0.1;
                if (pixel.s < 0) {
                    pixel.s = 0;
                }
                if (pixel.s > 1.0) {
                    pixel.s = 1.0;
                }
            }
        }
    }
    void Image::desaturate(double amount) {
        for (unsigned i = 0; i < width(); i++) {
            for (unsigned j = 0; j < height(); j++) {
                cs225::HSLAPixel & pixel = getPixel(i,j);
                pixel.s = pixel.s - amount;
                if (pixel.s < 0) {
                    pixel.s = 0;
                }
                if (pixel.s > 1.0) {
                    pixel.s = 1.0;
                }
            }
        }

    }
    void Image::grayscale(){
        for (unsigned i = 0; i < width(); i++) {
            for (unsigned j = 0; j < height(); j++) {
                cs225::HSLAPixel & pixel = getPixel(i,j);
                pixel.s = 0;
            }
        }

    }
    void Image::rotateColor(double degrees){
        for (unsigned i = 0; i < width(); i++) {
            for (unsigned j = 0; j < height(); j++) {
                cs225::HSLAPixel & pixel = getPixel(i,j);
                pixel.h = pixel.h + degrees;
                if(pixel.h > 360) {
                    pixel.h = pixel.h - 360;
                }
                if (pixel.h < 0) {
                    pixel.h = pixel.h + 360;
                }
            }
        }

    }
    void Image::illinify(){
        for (unsigned i = 0; i < width(); i++) {
            for (unsigned j = 0; j < height(); j++) {
                cs225::HSLAPixel & pixel = getPixel(i,j);
                if (pixel.h >= 293.5 || pixel.h < 113.5) {
                    pixel.h = 11;
                }
                else {
                    pixel.h = 216;
                }
            }
        }

    }
    void Image::scale(double factor){
    
        // for larger image, make the new image height/width first
        //scale it then resize it
        double newW =  factor * width();
        double newH = factor * height();

        PNG newImage = PNG(newW, newH);

        //resize(newW, newH);
        for (unsigned i = 0; i < newW; i++) {
            for (unsigned j = 0; j < newH; j++) {

                //take over the world
                double w = i * (width() / newW);
                double h = j * (height() / newH);
                // }
                // else if (factor < 1.0) {
                //     w = width() * factor;
                //     h = height() * factor;
                // }
                cs225::HSLAPixel & copyPixel = newImage.getPixel(i, j);
                cs225::HSLAPixel & pixel = getPixel(w,h);
                copyPixel = pixel;
            }
        }
        resize(width()*factor, height()*factor);
        for (unsigned i = 0; i < width(); i++) {
            for (unsigned j =0; j < height(); j++) {
                HSLAPixel & newish = newImage.getPixel(i,j);
                HSLAPixel & copyish = getPixel(i,j);

                copyish = newish;
            }
        }
    }

    void Image::scale(unsigned w, unsigned h){
        double width_ = w / width();
        double height_ = h / height();
        //  double factor = width_ / width(); 
         if (height_ < width_) {
             scale(height_);
         } else {
             scale(width_);
         }
    }

        //  }
         
        // for (unsigned i = 0; i < width(); i++) {
        //     for (unsigned j = 0; j < height(); j++) {
        //         //cs225::HSLAPixel & pixel = getPixel(i,j);
        //         unsigned ratio_width = w / width();
        //         unsigned ratio_height = h / height();
        //         unsigned max = 100;
        //         unsigned scaledw = ratio_width * width();
        //         unsigned scaledh = ratio_height * height();
        //         if (scaledh || scaledw > max) {
        //             scaledw = scaledw / 2;
        //             scaledh = scaledh / 2;
        //         }
        //     }
        
