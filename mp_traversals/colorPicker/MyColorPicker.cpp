#include "../cs225/HSLAPixel.h"
#include "../Point.h"

#include "ColorPicker.h"
#include "MyColorPicker.h"
#include <cmath>
using namespace cs225;

/**
 * Picks the color for pixel (x, y).
 * Using your own algorithm
 */
HSLAPixel MyColorPicker::getColor(unsigned x, unsigned y) {
  /* @todo [Part 3] */

  double pix_x = x - point_.x;
  double pix_y = y - point_.y;
  // double c = sqrt((pix_x * pix_x) + (pix_y * pix_y));
  double c = cos(x);
//   HSLAPixel pixel;
//   int hue = cos(x) + (y*15);
//   pixel.l = 0.5;
//   pixel.s = 1;

//   while (hue < 360) {
//     hue = hue - 360;
//     pixel.h = hue;
//   }
//   return HSLAPixel();
// }
double p = 1;
if( c > point_.x ) {
  p = 5;
  }
  HSLAPixel pixel;
  pixel.h = c;
  pixel.l = 1.0;
  pixel.s = 0.4;
  pixel.a = 1;
  return pixel;
}

MyColorPicker::MyColorPicker(Point p) {}
