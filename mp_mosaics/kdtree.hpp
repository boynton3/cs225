/**
 * @file kdtree.cpp
 * Implementation of KDTree class.
 */

#include <utility>
#include <algorithm>
#include <cmath>

using namespace std;

template <int Dim>
bool KDTree<Dim>::smallerDimVal(const Point<Dim>& first,
                                const Point<Dim>& second, int curDim) const
{
    /**
     * @todo Implement this function!
     */
    if (first[curDim] <= second[curDim]) {
      return true;
    }

    //what if they're equal?
    return false;
}

template <int Dim>
bool KDTree<Dim>::shouldReplace(const Point<Dim>& target,
                                const Point<Dim>& currentBest,
                                const Point<Dim>& potential) const
{
    /**
     * @todo Implement this function!
     */
    double best = getDistance(target, currentBest);
    double potent = getDistance(target, potential);


    if (potent < best) {
      return true;
    } else if (best == potent) {
      return (potential < currentBest);
    }
    return false;
}

template <int Dim>
KDTree<Dim>::KDTree(const vector<Point<Dim>>& newPoints)
{
    /**
     * @todo Implement this function!
     */
    // vector<Point<Dim>> temp = newPoints;
    // root = NULL;
    // if (!temp.empty()) {
    //   build(temp, temp.size() - 1, 0, 0);
    // }
    // if (newPoints.empty()){ 
    //   root = NULL;
    //   return;
    // }
    
    arr = newPoints;
    root = NULL;
    if (arr.size()) {
      build(0, arr.size() - 1, 0);
    }
    
}

template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim>& other) {
  /**
   * @todo Implement this function!
   */

  // vector<Point<Dim>> temp = newPoints;
  // root = NULL;
  // if (!temp.empty()) {
  //   build(temp, 0, temp.size() - 1, 0);
  //}
  size = other.size;
  
  root = other.root;
  arr = other.arr;

}

template <int Dim>
const KDTree<Dim>& KDTree<Dim>::operator=(const KDTree<Dim>& rhs) {
  /**
   * @todo Implement this function!
   */

  
  this->root = rhs.root;
  this->size = rhs.size;
  // delete *this;
  
  // this = newKDTree(rhs);

  return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree() {
  /**
   * @todo Implement this function!
   */
  clear(root);
  size = 0;
  arr.clear();
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */
    

    return Point<Dim>();
}

template <int Dim>
double KDTree<Dim>::getDistance(const Point<Dim>& t, const Point<Dim>& p) const {
  double dist = 0;

  for (unsigned i = 0; i < Dim; i++) {
    dist = dist + pow((t[i] - p[i]), 2);
  }
  return sqrt(dist);
}

template <int Dim>
void KDTree<Dim>::quickselect(int d, int r, int l, int k) {
  if (l >= r) {
    return;
  }

  int pIdx = (l + r) / 2;
  pIdx = partition(d, r, l, pIdx);
  if (k == pIdx) {
    return;
  } else if (k < pIdx) {
    r = pIdx - 1;
    quickselect(d, r, l, k);
  } else {
    l = pIdx + 1;
    quickselect(d, r, l, k);
  }
}

template <int Dim>
void KDTree<Dim>::build(int r, int l, int d) {
  int pivot = (l + r)/2;

  quickselect( d, r, l, pivot);

  if (l < pivot - 1) {
    r = pivot + 1;
    d = (d+1)%Dim;
    build(r, l, d);
  }
  if (r > pivot + 1) {
    l = pivot + 1;
    d = (d+1)%Dim;
    build(r, l, d);
  }
}

template <int Dim>
int KDTree<Dim>::partition(int d, int r, int l, int pivot) {
  Point<Dim> temp = arr[pivot];
  
  //otherwise
  std::swap(arr[pivot], arr[r]);

  int ct = l;
  for (int i = l; i < r; ++i) {
    if (smallerDimVal(arr[i], temp, d)) {
      std::swap(arr[ct], arr[i]);
      ct++;
    }
  }
  std::swap(arr[ct], arr[r]);
  return ct;
}

template <int Dim>
void KDTree<Dim>::clear(KDTreeNode* subroot) {
  if (subroot != NULL) {
    clear(subroot->left);
    clear(subroot->right);
    delete subroot;
    subroot = NULL;
  }
}

template <int Dim>
typename KDTree<Dim>::KDTreeNode* KDTree<Dim>::copy(KDTreeNode* other) {
  if (other != NULL) {
    KDTreeNode * subRoot = new KDTreeNode;
    subRoot-> right = copy(other->right);
    subRoot-> left = copy(other-> left);
    subRoot->point = other->point;
    return subRoot;
  }
}