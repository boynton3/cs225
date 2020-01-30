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
      HSLAPixel& rotate = output.getPixel(w - x - 1, h - y);
      rotate = pixel;
    }
  }
  //write it back to the output
  output.writeToFile(outputFile);
}

cs225::PNG myArt(unsigned int width, unsigned int height) {
  cs225::PNG png(width, height);
  // TODO: Part 3

  return png;
}
