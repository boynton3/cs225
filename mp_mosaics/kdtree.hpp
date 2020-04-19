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
    for (size_t i = 0; i < newPoints.size(); i++) {
      arr.push_back(newPoints[i]);
    }
    root = build(newPoints.size() - 1, 0, 0);
    
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
  
  
  
  arr = other.arr;
  root = build(root, arr.size()-1, 0, 0);
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
  
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */
    return find(query,root->point, root, 0);

    return Point<Dim>();
}

//helper function to calculate distance between two points 
template <int Dim>
double KDTree<Dim>::getDistance(const Point<Dim>& t, const Point<Dim>& p) const {
  double dist = 0;

  for (unsigned i = 0; i < Dim; i++) {
    dist = dist + pow((t[i] - p[i]), 2);
  }
  return sqrt(dist);
}

//quickselect algorithm used in build function
template <int Dim>
void KDTree<Dim>::quickselect(int d, int r, int l, int k) {
  if (l >= r) {
    return;
  }

  //middle is the pivot point
  int pIdx = (l + r) / 2;
  //moves pivot to correct position
  int idx = partition(d, r, l, pIdx);
  
  //compare pivot to the median we are searching for
  //if it isn't find, recursively search
  //if pivot is larger than median, recurse left
  //otherwise, recurse right
  if (k == idx) {
    return;
  } else if (k < idx) {
    r = idx - 1;
    quickselect(d, r, l, k);
  } else {
    l = idx + 1;
    quickselect(d, r, l, k);
  }
}


//helper function to create a new root node with a point at the given pivot
//and then recursively builds the left and right subtrees
//used the quickselect function to get pivot point
template <int Dim>
typename KDTree<Dim>::KDTreeNode * KDTree<Dim>::build(int r, int l, int d) {
  
  //if it's a leaf node
  if (r < l) {
    return NULL;
  }
  int pivot = (l + r)/2;
  //sets up the pivot point (median)
  quickselect( d, r, l, pivot);
  KDTreeNode * temp = new KDTreeNode(arr[pivot]);
  //builds left and right subtrees, moves to the next dimension (whoaaaaaa)
  temp->left = build((pivot - 1), l, (d+1)%Dim);
  temp->right = build(r, (pivot + 1), (d+1)%Dim);
  return temp;
}


//helper function used in quickselect function
template <int Dim>
int KDTree<Dim>::partition(int d, int r, int l, int pivot) {
  Point<Dim> temp = arr[pivot];
  
  //move the pivot point to the right
  std::swap(arr[pivot], arr[r]);

  int ct = l;

  //iterate through and compare if the point is smaller than the 
  //pivot given the dimension
  //if it is, move it to the left
  for (int i = l; i < r; ++i) {
    if (smallerDimVal(arr[i], temp, d)) {
      std::swap(arr[ct], arr[i]);
      ct++;
    }
  }

  //fixes pivot point
  std::swap(arr[ct], arr[r]);
  return ct;
}

//helper function to recursivly delete tree and subtrees
//used in destructor
template <int Dim>
void KDTree<Dim>::clear(KDTreeNode* subroot) {
  if (subroot != NULL) {
    clear(subroot->left);
    clear(subroot->right);
    delete subroot;
    subroot = NULL;
  }
}

//helper function to find nearest neighbor recursively
//traverse the entire tree until the leafnode
//and then work backwards until we find the closest point aka the target
template <int Dim>
Point<Dim> KDTree<Dim>::find(const Point<Dim> query, Point<Dim> curr, const KDTreeNode* root, int dim) const {
  
  //if it's a leaf (this prevents infinite recursion)
  if (root->right == NULL && root->left == NULL) {
    return root->point;
  }
  
  bool direction = false;

  //check if the query is smaller than the point, if it is
  //search the left subtree
  //search down left and rights of the left subtree
  //if quert is larger than point, search down the right tree with the next dimension
  if (smallerDimVal(query, root->point, dim) && root->left !=NULL) {
    curr = find(query, curr, root->left, (dim+1)%Dim);
    direction = true;
  } else if (smallerDimVal(query, root->point, dim) && root->left == NULL) {
    curr = find(query, curr, root->right, (dim+1)%Dim);
  } else if (!(smallerDimVal(query, root->point, dim)) && root->right != NULL) {
    curr = find(query, curr, root->right, (dim+1)%Dim);
  } else {
    curr = find(query, curr, root->left, (dim+1)%Dim);
    direction = true;
  }


  //now we work our way back to find the closest path to query
  //if our curr point is closer (check using the distance function)
  //this gets a little confusing
  //comparing to previous best nearest to the opposite direction of closest
  
  //if it's a leaf node
  if (shouldReplace(query, curr, root->point)) {
    curr = root->point;
  }

  //radius and radius of plane
  double currentBest = getDistance(query, curr);
  //can't use distance formula for this and honestly too hard to try and fix so don't bother
  double potentialBest = (root->point[dim] - query[dim]) * (root->point[dim] - query[dim]);

  //if the point we split is smaller than the radius, continue to look for 
  //closer points in opp direction
  if (potentialBest <= currentBest && direction == true && root->right != NULL) {
    Point<Dim> closest = find(query, curr, root->right, (dim+1)%Dim);
    if (shouldReplace(query, curr, closest)) {
      curr = closest;
    }
  } else if (potentialBest <= currentBest && direction == false && root->right == NULL) {
    if (root->left != NULL) {
      Point<Dim> closest = find(query, curr, root->left, (dim+1)%Dim);
      if (shouldReplace(query, curr, closest)) {
        curr = closest;
      }
    } 

  }

  return curr;

}
