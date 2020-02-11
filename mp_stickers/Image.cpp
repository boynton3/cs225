#include <iostream>
#include "Image.h"
#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

namespace std {
    
    void Image::lighten() {
        for (unsigned i = 0; i < width(); i++) {
            for (unsigned j = 0; j < height(); j++) {
                cs225::HSLAPixel & pixel = getPixel(i,j);
                if (pixel.l < 1.0) {
                    pixel.l = pixel.l + 0.1;
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
            }
        }  
    }



    }
    void Image::darken() {
        for (unsigned i = 0; i < width(); i++) {
            for (unsigned j = 0; j < height(); j++) {
                cs225::HSLAPixel & pixel = getPixel(i,j);
                if (pixel.l < 1.0) {
                    pixel.l = pixel.l - 0.1;
                } 
            }
        }

    }
    void Image::darken(double amount) {
        for (unsigned i = 0; i < width(); i++) {
            for (unsigned j = 0; j < height(); j++) {
                cs225::HSLAPixel & pixel = getPixel(i,j);
                if (pixel.l < 1.0) {
                    pixel.l = pixel.l - amount;
                }
            }
        }

    }
    void Image::saturate(){
        for (unsigned i = 0; i < width(); i++) {
            for (unsigned j = 0; j < height(); j++) {
                cs225::HSLAPixel & pixel = getPixel(i,j);
                if (pixel.s < 1.0) {
                    pixel.s = pixel.s + 0.1;
                }
            }
        }

    }
    void Image::saturate(double amount){
        for (unsigned i = 0; i < width(); i++) {
            for (unsigned j = 0; j < height(); j++) {
                cs225::HSLAPixel & pixel = getPixel(i,j);
                if (pixel.s < 1.0) {
                    pixel.s = pixel.s + amount;
                }
            }
        }

    }
    void Image::desaturate(){
        for (unsigned i = 0; i < width(); i++) {
            for (unsigned j = 0; j < height(); j++) {
                cs225::HSLAPixel & pixel = getPixel(i,j);
                if (pixel.s < 1.0) {
                    pixel.s = pixel.s - 0.1;
                }
            }
        }
    }
    void Image::desaturate(double amount) {
        for (unsigned i = 0; i < width(); i++) {
            for (unsigned j = 0; j < height(); j++) {
                cs225::HSLAPixel & pixel = getPixel(i,j);
                if (pixel.s < 1.0) {
                    pixel.s = pixel.s - amount;
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
        for (unsigned i = 0; i < width(); i++) {
            for (unsigned j = 0; j < height(); j++) {
                cs225::HSLAPixel & pixel = getPixel(i,j);
            }
        }

    }
    void Image::scale(unsigned w, unsigned h){
        for (unsigned i = 0; i < width(); i++) {
            for (unsigned j = 0; j < height(); j++) {
                cs225::HSLAPixel & pixel = getPixel(i,j);
                int ratio_width = w / width();
                int ratio_height = h / height();
                int max = 100;
                if (ratio_height && ratio_width < max) {
                    
                }
            }
        }

    }
}
