#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

#include <string>

using namespace cs225;

void rotate(std::string inputFile, std::string outputFile) {
  //read file
  PNG original;
  original.readFromFile(inputFile);
  //set the size of the image
  unsigned w = original.width();
  unsigned h = original.height();

  //need an output image
  PNG output(w,h);

//keep in mind, the image is starting from upper left corner
//to rotate 180, have to run through height before width, otherwise it rotates by 90 ( I think )
  for (unsigned y = 0; y < original.height(); y++) {
    for (unsigned x = 0; x < original.width(); x++) {
      //get current pixel 
      HSLAPixel& pixel = original.getPixel(x,y);
      //shift each pixel 
      HSLAPixel& rotate = output.getPixel(w - x - 1, h - y - 1);
      rotate = pixel;
    }
  }
  //write it back to the output
  output.writeToFile(outputFile);
}

PNG myArt(unsigned int width, unsigned int height) {
  PNG art(width, height);
  double hues = (360/width) - 50;
  //double saturation = ()

  for (unsigned x = 0; x < art.width(); x++) {
    for (unsigned y = 0; y < art.height(); y++) {
      HSLAPixel & curr = art.getPixel(x, y);
      
      if (x % 2 == 0) {
        curr.h = hues * x;
      }
      else {
      curr.h = hues * y;
      }

      curr.l = 2.5;
      curr.s = 1.0;
      curr.a = 1.0;      
    }
  }
  return art;
}
