#include <iterator>
#include <cmath>

#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <unordered_set>

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"
#include "BFS.h"

using namespace cs225;

Point& BFS::startingPoint() {
  return start_;
}

Point BFS::next_() {
  //this is where we'll do all the 
  //checking mumbo jumbo
  //that TYPICALLY would be done in the ++operator
  //but it's easier to do here for the individual
  //data structures and use then in the ++operatorinstead
  
  Point current_ = pop();
  valid_.insert(current_);

  //shift in x direction
  Point left = Point(current_.x - 1, current_.y);
  Point right = Point(current_.x + 1, current_.y);
  //shift in y direction
  Point above = Point(current_.x, current_.y - 1);
  Point below = Point(current_.x, current_.y + 1);
  
  //vec[current_.x][current_.y] = true;
  // HSLAPixel pix = png_.getPixel(start_.x, start_.y);
  // double delta_1 = calculateDelta(png_.getPixel(current_.x + 1, current_.y));
  // double delta_2 = calculateDelta(png_.getPixel(current_.x - 1, current_.y));
  // double delta_3 = calculateDelta(png_.getPixel(current_.x, current_.y + 1));
  // double delta_4 = calculateDelta(pix, png_.getPixel(current_.x, current_.y - 1));
    

  //now we need to add these points
  //if x < 0, it's left
  if (current_.x  < png_.width() - 1) {
    add(right);
  }

  //left
  if (current_.x > 0 ) {
    add(left);
  }

  //above   
  if (current_.y > 0) {
    add(above);
  }
    
  //below
  if(current_.y < png_.height() - 1) {
    add(below);
  }

  deleted();
  return current_;

}

double BFS::toleranceVal() {
  return tolerance_;
}

HSLAPixel& BFS::getPixel(const Point& point) {
  return png_.getPixel(point.x, point.y);
}

void BFS::deleted() {
  std::queue<Point> temp;
  bool empty = true;

  while(!p.empty()) {
    
    Point top = p.front();
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
    p.push(temp.front());
    temp.pop();
  }
}

double BFS::calculateDelta(const Point& other) {
  //pixels might need to be const
  HSLAPixel& p1 = getPixel(start_);
  HSLAPixel& p2 = getPixel(other);
  double h = fabs(p1.h - p2.h);
  double s = p1.s - p2.s;
  double l = p1.l - p2.l;

  // Handle the case where we found the bigger angle between two hues:
  if (h > 180) { h = 360 - h; }
  h /= 360;

  return sqrt( (h*h) + (s*s) + (l*l) );
}


/**
 * Initializes a breadth-first ImageTraversal on a given `png` image,
 * starting at `start`, and with a given `tolerance`.
 * @param png The image this BFS is going to traverse
 * @param start The start point of this BFS
 * @param tolerance If the current point is too different (difference larger than tolerance) with the start point,
 * it will not be included in this BFS
 */
BFS::BFS(const PNG & png, const Point & start, double tolerance) {  
  /** @todo [Part 1] */
  //same as DFS
  png_ = png;
  start_ = start;
  tolerance_ = tolerance;
  
  std::queue<Point> p;
  std::unordered_set<Point, Hash> valid_;

  add(start_);
  valid_.insert(start_);
  
  //p.push(start);
}

/**
 * Returns an iterator for the traversal starting at the first point.
 */
ImageTraversal::Iterator BFS::begin() {
  /** @todo [Part 1] */
  //need to make the iterator for this to work
  BFS* obj = new BFS(png_, start_, tolerance_);
  return ImageTraversal::Iterator(obj);
}

/**
 * Returns an iterator for the traversal one past the end of the traversal.
 */
ImageTraversal::Iterator BFS::end() {
  /** @todo [Part 1] */
  //might need to add "this"
  //Iterator iterate = ImageTraversal::Iterator(png_, start_, tolerance_, this);
  //iterate.atEnd(true);
  return ImageTraversal::Iterator(NULL);
}

/**
 * Adds a Point for the traversal to visit at some point in the future.
 */
void BFS::add(const Point & point) {
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
Point BFS::pop() {
  /** @todo [Part 1] */
  Point temp = p.front();
  p.pop();
  return temp;
}

/**
 * Returns the current Point in the traversal.
 */
Point BFS::peek() const {
  /** @todo [Part 1] */
  return p.front();
}

/**
 * Returns true if the traversal is empty.
 */
bool BFS::empty() const {
  /** @todo [Part 1] */
  // if (p.empty()) {
  //   return true;
  // }
  // return false;
  return p.empty();
}
