#include <cmath>
#include <iterator>
#include <iostream>
#include <vector>

#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

/**
 * Calculates a metric for the difference between two pixels, used to
 * calculate if a pixel is within a tolerance.
 *
 * @param p1 First pixel
 * @param p2 Second pixel
 * @return the difference between two HSLAPixels
 */
double ImageTraversal::calculateDelta(const HSLAPixel & p1, const HSLAPixel & p2) {
  double h = fabs(p1.h - p2.h);
  double s = p1.s - p2.s;
  double l = p1.l - p2.l;

  // Handle the case where we found the bigger angle between two hues:
  if (h > 180) { h = 360 - h; }
  h /= 360;

  return sqrt( (h*h) + (s*s) + (l*l) );
}

//don't know if I really need this
// bool ImageTraversal::Iterator::area(int x, int y) {
//   return !(valid[x][y]);
// }

//this needs to be done for the individual data structures :/
// ImageTraversal::~ImageTraversal() {

// }
// ImageTraversal::Iterator::Iterator(const PNG & png, const Point & start, double tolerance) {
//   //point_ = point;
//   png_ = png;
//   start_ = start;
//   current_ = start_;
//   tolerance_ = tolerance;

//   // std::vector<bool> val(png_.width()*png_.height());
//   // for (unsigned i = 0; i < png_.width(); i++) {
//   //   std::vector<bool> val;
//   //   vec.push_back(val);
//   //   for (unsigned j = 0; j <png_.height(); j++) {
//   //     vec[i].push_back(false);
//   //   }
    
//   // }
//   // vec[start_.x][start.y] = true;

// }

ImageTraversal::Iterator::Iterator(ImageTraversal* point) {
  point_ = point;
}

/**
 * Default iterator constructor.
 */
ImageTraversal::Iterator::Iterator() {
  /** @todo [Part 1] */
  point_ = NULL;
}

// ImageTraversal::Iterator::~Iterator() {
//   for (unsigned i = 0; i < png_.width(); i++) {
//     dele
//   }
// }

/**
 * Iterator increment opreator.
 *
 * Advances the traversal of the image.
 */
ImageTraversal::Iterator & ImageTraversal::Iterator::operator++() {
  /** @todo [Part 1] */

  /** All this mumbo jumbo has been moved to
   * the BFS and DFS files so it can be checked
   * and done for each respective data structure
   * 
   * Now this ACTUALLY makes the ++operator
   * and forward iterator simple
   */
    
  //remember that you are starting in 
  //the bottom-left corner
  // just like the example
  
  // //shift in x direction
  // Point left = Point(current_.x - 1, current_.y);
  // Point right = Point(current_.x + 1, current_.y);
  // //shift in y direction
  // Point above = Point(current_.x, current_.y - 1);
  // Point below = Point(current_.x, current_.y + 1);
  
  // vec[current_.x][current_.y] = true;
  // HSLAPixel pix = png_.getPixel(start_.x, start_.y);
  // double delta_1 = calculateDelta(pix, png_.getPixel(current_.x + 1, current_.y));
  // double delta_2 = calculateDelta(pix, png_.getPixel(current_.x - 1, current_.y));
  // double delta_3 = calculateDelta(pix, png_.getPixel(current_.x, current_.y + 1));
  // double delta_4 = calculateDelta(pix, png_.getPixel(current_.x, current_.y - 1));
    

  // //now we need to add these points
  // //if x < 0, it's left
  // if (current_.x + 1 < png_.width() && delta_1 < tolerance_) {
  //   point_->add(right);
  // }

  // //left
  // if (current_.x - 1 >= 0 && delta_2 < tolerance_) {
  //   point_->add(left);
  // }

  // //above   
  // if (current_.y - 1 >= 0 && delta_3 < tolerance_) {
  //   point_->add(above);
  // }
    
  // //below
  // if(current_.y + 1 < png_.height() && delta_4 < tolerance_) {
  //   point_->add(below);
  // }

  // if (point_->empty()) {
  
  //   //atEnd(true);
  //   return *this;
  // }

  // Point temp = point_->pop();
  // //if (vec[temp.x + temp.y * png_.width()] == true) {
  //   if (point_->empty()) {
  //     point_ = NULL;
  //     //atEnd(true);
  //     return *this;
  //   }
  //   temp = point_->pop();
  // //}
  // start_ = temp;

  // //vec[start_.x + start_.y * png_.width()] = true;

  // path.push_back(start_);

    
  // //might need to edit this in
  // //return *this;
  // return *this;
  if (!point_->empty() && point_ != NULL) {
    point_->next_();
    if (point_->empty()) {
      point_ = NULL;
    }
  } else {
    point_ = NULL;
  }

  return *this;

}

/**
 * Iterator accessor opreator.
 *
 * Accesses the current Point in the ImageTraversal.
 */
Point ImageTraversal::Iterator::operator*() {
  /** @todo [Part 1] */
  //check if the point is null or empty
  if (!point_->empty() && point_ != NULL) {
    return point_->peek();
  } else {
    //might be -1,-1
    point_ = NULL;
    return Point(0, 0);
  //return current_;
  //return point_->peek();
  }
}

/**
 * Iterator inequality operator.
 *
 * Determines if two iterators are not equal.
 */
bool ImageTraversal::Iterator::operator!=(const ImageTraversal::Iterator &other) {
  /** @todo [Part 1] */
  return !(this->point_ == other.point_);
}


//helper functions
// bool ImageTraversal::Iterator::area(int x, int y) {
//   return !(visited[x][y]);
// }
//if we can even reach this point in the image
// bool ImageTraversal::Iterator::isValid(Point point) {
//   Point temp = point;
//   if (temp.y >= png_.height() || temp.x >= png_.width()) {
//     return false;
//   }

  
//   HSLAPixel & b = png_.getPixel(current_.x, current_.y);
//   HSLAPixel & t = png_.getPixel(temp.x, temp.y);
//   if (calculateDelta(b, t) >= tolerance_) {
//     return false;
//   }
//   return true;
// }

// void ImageTraversal::Iterator::atEnd(bool e) {
//   end_ = e;
// }