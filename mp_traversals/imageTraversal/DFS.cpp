#include <iterator>
#include <cmath>

#include <list>
#include <queue>
#include <stack>
#include <vector>

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"
#include "DFS.h"

Point& DFS::startingPoint() {
  return start_;
}

Point DFS::next_() {
  //this is where we'll do all the 
  //checking mumbo jumbo
  //that TYPICALLY would be done in the ++operator
  //but it's easier to do here for the individual
  //data structures and use then in the ++operatorinstead
  
  Point current_ = pop();
  valid_.insert(current_);

  //shift in x direction
  // Point left = Point(current_.x - 1, current_.y);
  // Point right = Point(current_.x + 1, current_.y);
  // //shift in y direction
  // Point above = Point(current_.x, current_.y - 1);
  // Point below = Point(current_.x, current_.y + 1);
  
  //vec[current_.x][current_.y] = true;
  // HSLAPixel pix = png_.getPixel(start_.x, start_.y);
  // double delta_1 = calculateDelta(png_.getPixel(current_.x + 1, current_.y));
  // double delta_2 = calculateDelta(png_.getPixel(current_.x - 1, current_.y));
  // double delta_3 = calculateDelta(png_.getPixel(current_.x, current_.y + 1));
  // double delta_4 = calculateDelta(pix, png_.getPixel(current_.x, current_.y - 1));
    

  //now we need to add these points
  //if x < 0, it's left
  if (current_.x < (png_.width() - 1)) {
    add(Point(current_.x + 1, current_.y));
  }
  
  //below
  if(current_.y < (png_.height() - 1)) {
    add(Point(current_.x, current_.y + 1));
  }
  
  //left
  if (current_.x > 0 ) {
    add(Point(current_.x - 1, current_.y));
  }

  //above   
  if (current_.y > 0) {
    add(Point(current_.x, current_.y - 1));
  }

  deleted();
  return current_;

}

double DFS::toleranceVal() {
  return tolerance_;
}

HSLAPixel& DFS::getPixel(const Point& point) {
  return png_.getPixel(point.x, point.y);
}

void DFS::deleted() {
  std::stack<Point> temp;
  bool empty = true;

  while(!p.empty()) {
    
    Point top = p.top();
    empty = true;
    p.pop();

    if(valid_.count(top)) {
      empty = false;
    }
    if (empty) {
      temp.push(top);
    }
  }

  while(!temp.empty()) {
    p.push(temp.top());
    temp.pop();
  }
}

/**
 * Calculates a metric for the difference between two pixels, used to
 * calculate if a pixel is within a tolerance.
 *
 * @param p1 First pixel
 * @param p2 Second pixel
 * @return the difference between two HSLAPixels
 */
double DFS::calculateDelta(const Point& other) {
  //pixels might need to be const
  const HSLAPixel& p1 = getPixel(start_);
  const HSLAPixel& p2 = getPixel(other);
  double h = fabs(p1.h - p2.h);
  double s = p1.s - p2.s;
  double l = p1.l - p2.l;

  // Handle the case where we found the bigger angle between two hues:
  if (h > 180) { h = 360 - h; }
  h /= 360;

  return sqrt( (h*h) + (s*s) + (l*l) );
}

/**
 * Initializes a depth-first ImageTraversal on a given `png` image,
 * starting at `start`, and with a given `tolerance`.
 *
 * @param png The image this DFS is going to traverse
 * @param start The start point of this DFS
 * @param tolerance If the current point is too different (difference larger than tolerance) with the start point,
 * it will not be included in this DFS
 */
DFS::DFS(const PNG & png, const Point & start, double tolerance) {
  /** @todo [Part 1] */
  png_ = png;
  start_ = start;
  tolerance_ = tolerance;

  // std::stack<Point> p;
  // std::unordered_set<Point, Hash> valid_;


  add(start_);
  valid_.insert(start_);
}


/**
 * Returns an iterator for the traversal starting at the first point.
 */
ImageTraversal::Iterator DFS::begin() {
  /** @todo [Part 1] */
  //might need to make a new DFS object
  //DFS * obj = new DFS(png_, start_, tolerance_);
  return ImageTraversal::Iterator(new DFS(png_, start_, tolerance_));
}

/**
 * Returns an iterator for the traversal one past the end of the traversal.
 */
ImageTraversal::Iterator DFS::end() {
  /** @todo [Part 1] */
  //Iterator iterate = ImageTraversal::Iterator(png_, start_, tolerance_, this);
  //iterate.atEnd(true);
  return ImageTraversal::Iterator(NULL);
}

/**
 * Adds a Point for the traversal to visit at some point in the future.
 */
void DFS::add(const Point & point) {
  /** @todo [Part 1] */
  //if we've visited, move on
  //otherwise, as long as the delta is 
  //less than the tolerance, we can add it
  if (!valid_.count(point) && (calculateDelta(point) < tolerance_)) {
    p.push(point);
  }
}

/**
 * Removes and returns the current Point in the traversal.
 */
Point DFS::pop() {
  /** @todo [Part 1] */
  Point temp = p.top();
  p.pop();
  return temp;
}

/**
 * Returns the current Point in the traversal.
 */
Point DFS::peek() const {
  /** @todo [Part 1] */
  return p.top();
}

/**
 * Returns true if the traversal is empty.
 */
bool DFS::empty() const {
  /** @todo [Part 1] */
  if (p.empty()) {
    return true;
  }
  return false;
}
