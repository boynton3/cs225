/**
 * @file DFS.h
 */

#pragma once

#include <iterator>
#include <cmath>
#include <list>
#include <stack>
#include <unordered_set>

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

using namespace cs225;

/**
 * A depth-first ImageTraversal.
 * Derived from base class ImageTraversal
 */
class DFS : public ImageTraversal {
public:
  DFS(const PNG & png, const Point & start, double tolerance);
  virtual ~DFS(){}

  ImageTraversal::Iterator begin();
  ImageTraversal::Iterator end();

  void add(const Point & point);
  Point pop();
  Point peek() const;
  bool empty() const;

  //helper functions (doing them here instead of traversals makes it simpler)
  void deleted();
  Point& startingPoint();
  Point next_();
  double toleranceVal();
  HSLAPixel& getPixel(const Point& point);
  double calculateDelta(const Point& other);

private:
  /** @todo [Part 1] */
  /** add private members here*/

  //unordered set requires it's own hash function
  //Putting the visited points into a hash map (unordered sets)
  //will speed up the process to O(1) lookup time
  class Hash {
  public:
    //overloading the constructor to return size_t
    //allows it to be a function
    std::size_t operator() (const Point& p) const {
      int x = p.x * 5;
      int y = p.y * 7;
      //multiplying x by y by two different primes 
      //results in a unique hash for ANY point
      return (x * y);
    }
  };

  std::stack<Point> p;
  std::unordered_set<Point, Hash> valid_;
  Point start_;
  //Point next_;
  PNG png_;
  double tolerance_;
  //Iterator iterate;

};
