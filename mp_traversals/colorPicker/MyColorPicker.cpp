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
  HSLAPixel pixel;
  int hue = cos(x) * 2 + sin(y*5);
  pixel.l = 0.5;
  pixel.s = 1;

  while (hue < 90) {
    hue = hue - 270;
    pixel.h = hue;
  }
  return HSLAPixel();
}
