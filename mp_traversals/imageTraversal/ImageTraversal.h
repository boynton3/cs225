/**
 * @file ImageTraversal.h
 */
#pragma once

#include <iterator>
#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"
#include <vector>

using namespace cs225;
using std::vector;

/**
 * A base class for traversal algorithms on images.
 *
 * BFS and DFS will inherit from this class
 * 
 * Each derived class must maintain an ordering of points on an image,
 * through calls to the virtual member functions `add` and `pop`.
 * 
 * A derived class provides a traversal by returning instances of
 * ImageTraversal::Iterator.
 */
class ImageTraversal {
public:
  /**
   * A forward iterator through an ImageTraversal.
   */
  class Iterator : std::iterator<std::forward_iterator_tag, Point> {
  public:
    Iterator();

    Iterator & operator++();
    Point operator*();
    bool operator!=(const Iterator &other);

    /** @todo [Part 1] */
    /** add member functions if neccesary*/
    //Iterator(ImageTraversal *point);
    //~Iterator();
    //Iterator(const PNG & png, const Point & start, double tolerance);
    Iterator(ImageTraversal* point);
    // static double calcHelper(const HSLAPixel & p1, const HSLAPixel & p2) {
    //   return calculateDelta(p1, p2);
    // }
    //bool isValid(Point point);
    //void atEnd(bool e);
    

  private:
    /** @todo [Part 1] */
    /** add private members here if neccesary*/
    ImageTraversal * point_;

    // Point start_;
    // Point current_;
    // PNG png_;
    //double tolerance_;
   
    // vector<Point> path;
    // std::vector<vector<bool>> vec;
    
    

  };
  
  /**
   * The begining of an iterator
   * Virtual function. Derived class need to implement this
   */
  virtual Iterator begin() = 0;

  /**
   * The end of an iterator
   * Virtual function. Derived class need to implement this
   */
  virtual Iterator end() = 0;

  /**
   * Add new point to the traversal
   * Virtual function. Derived class need to implement this
   */
  virtual void add(const Point & t) = 0;
  /**
   * Remove and return the next point of the traversal
   * Virtual function. Derived class need to implement this
   */
  virtual Point pop() = 0;
  /**
   * Return but not remove the next point of the traversal
   * Virtual function. Derived class     Iterator(ImageTraversal*,PNG, Point, double);
need to implement this
   */
  virtual Point peek() const = 0;
  /**
   * To see if the traversal has no points left
   * Virtual function. Derived class need to implement this
   */
  virtual bool empty() const = 0;

  //need to implement virtual function
  virtual Point& startingPoint() = 0;
  virtual Point next_() = 0;
  virtual double toleranceVal() = 0;
  virtual HSLAPixel& getPixel(const Point& point) = 0;
  virtual void deleted() = 0;



private:
  static double calculateDelta(const HSLAPixel & p1, const HSLAPixel & p2);  
};
