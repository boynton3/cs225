#include "cs225/PNG.h"
#include <list>
#include <iostream>
#include <queue>

#include "colorPicker/ColorPicker.h"
#include "imageTraversal/ImageTraversal.h"

#include "Point.h"
#include "Animation.h"
#include "FloodFilledImage.h"

using namespace cs225;

/**
 * Constructs a new instance of a FloodFilledImage with a image `png`.
 * 
 * @param png The starting image of a FloodFilledImage
 */
FloodFilledImage::FloodFilledImage(const PNG & png) {
  /** @todo [Part 2] */
  png_ = new PNG(png);
}

/**
 * Adds a FloodFill operation to the FloodFillImage.  This function must store the operation,
 * which will be used by `animate`.
 * 
 * @param traversal ImageTraversal used for this FloodFill operation.
 * @param colorPicker ColorPicker used for this FloodFill operation.
 */
void FloodFilledImage::addFloodFill(ImageTraversal & traversal, ColorPicker & colorPicker) {
  /** @todo [Part 2] */
  point_.push_back(&traversal);
  color_.push_back(&colorPicker);
  //initial_ = true;
}

/**
 * Creates an Animation of frames from the FloodFill operations added to this object.
 * 
 * Each FloodFill operation added by `addFloodFill` is executed based on the order
 * the operation was added.  This is done by:
 * 1. Visiting pixels within the image based on the order provided by the ImageTraversal iterator and
 * 2. Updating each pixel to a new color based on the ColorPicker
 * 
 * While applying the FloodFill to the image, an Animation is created by saving the image
 * after every `frameInterval` pixels are filled.  To ensure a smooth Animation, the first
 * frame is always the starting image and the final frame is always the finished image.
 * 
 * (For example, if `frameInterval` is `4` the frames are:
 *   - The initial frame
 *   - Then after the 4th pixel has been filled
 *   - Then after the 8th pixel has been filled
 *   - ...
 *   - The final frame, after all pixels have been filed)
 */ 
Animation FloodFilledImage::animate(unsigned frameInterval) const {
  Animation animation;
  /** @todo [Part 2] */

  animation.addFrame(*png_);
  ImageTraversal::Iterator iterator;
  unsigned count = 0;

  //visit every pixel within image based on the order provided
  //by the imageTraversal iterator
  for(unsigned i = 0; i < point_.size(); i++) {
    //for(iterator = point_[i].begin())
    ImageTraversal::Iterator traverse = point_[i];
    ColorPicker* colors = color_[i];

    ImageTraversal::Iterator beginning = point_[i]->begin();
    ImageTraversal::Iterator ending = point_[i]->end();

    for( iterator = beginning; iterator != ending; ++iterator) {
      if (count != frameInterval) {
        HSLAPixel& current = png_->getPixel((*iterator).x, (*iterator).y);
        HSLAPixel pixel = color_[i]->getColor((*iterator).x, (*iterator).y);

        current.h = pixel.h;
        current.s = pixel.s;
        current.l = pixel.l;
        current.a = pixel.a;

        count++;

      }
      if (count == frameInterval) {
        animation.addFrame(*png_);
        count = 0;
      }
    }
    animation.addFrame(*png_);
  }
  //animation.addFrame(png_);
  return animation;
}
// Animation FloodFilledImage::animate(unsigned frameInterval) const {
//   Animation animation;
//   /** @todo [Part 2] */

//   animation.addFrame(*png_);
//   ImageTraversal::Iterator iterator;
//   unsigned count = 0;

//   //visit every pixel within image based on the order provided
//   //by the imageTraversal iterator
//   for(unsigned i = 0; i < point_.size(); i++) {
//     //for(iterator = point_[i].begin())
//     ImageTraversal::Iterator traverse = point_[i];
//     ColorPicker* colors = color_[i];

//     queue<Point> p;

//     ImageTraversal::Iterator beginning = point_[i]->begin();
//     ImageTraversal::Iterator ending = point_[i]->end();

//     for( iterator = beginning; iterator != ending; ++iterator) {
//       count++;
//      for(unsigned j = 0; j < frameInterval; ++j) {
//        p.push(*beginning);
//        ++beginning;
//        if (!( beginning != ending)) {
//          break;
//        }
//      }
//      while (!p.empty()) {
//        Point curr = p.front();
//        p.pop();

//         HSLAPixel& current = png_->getPixel((*iterator).x, (*iterator).y);
//         HSLAPixel pixel = colors->getColor((*iterator).x, (*iterator).y);

//         current.h = pixel.h;
//         current.s = pixel.s;
//         current.l = pixel.l;
//         current.a = pixel.a;

//       }
//       if (count == frameInterval) {
//         animation.addFrame(*png_);
//         count = 0;
//       }
//     }
//     animation.addFrame(*png_);
//   }
//   //animation.addFrame(png_);
//   return animation;
// }