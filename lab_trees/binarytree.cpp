/**
 * @file binarytree.cpp
 * Definitions of the binary tree functions you'll be writing for this lab.
 * You'll need to modify this file.
 */
#include "TreeTraversals/InorderTraversal.h"
#include <iostream>
/**
 * @return The height of the binary tree. Recall that the height of a binary
 *  tree is just the length of the longest path from the root to a leaf, and
 *  that the height of an empty tree is -1.
 */
template <typename T>
int BinaryTree<T>::height() const
{
    // Call recursive helper function on root
    return height(root);
}

/**
 * Private helper function for the public height function.
 * @param subRoot
 * @return The height of the subtree
 */
template <typename T>
int BinaryTree<T>::height(const Node* subRoot) const
{
    // Base case
    if (subRoot == NULL)
        return -1;

    // Recursive definition
    return 1 + max(height(subRoot->left), height(subRoot->right));
}

/**
 * Prints out the values of the nodes of a binary tree in order.
 * That is, everything to the left of a node will be printed out before that
 * node itself, and everything to the right of a node will be printed out after
 * that node.
 */
template <typename T>
void BinaryTree<T>::printLeftToRight() const
{
    // Call recursive helper function on the root
    printLeftToRight(root);

    // Finish the line
    cout << endl;
}

/**
 * Private helper function for the public printLeftToRight function.
 * @param subRoot
 */
template <typename T>
void BinaryTree<T>::printLeftToRight(const Node* subRoot) const
{
    // Base case - null node
    if (subRoot == NULL)
        return;

    // Print left subtree
    printLeftToRight(subRoot->left);

    // Print this node
    cout << subRoot->elem << ' ';

    // Print right subtree
    printLeftToRight(subRoot->right);
}

/**
 * Flips the tree over a vertical axis, modifying the tree itself
 *  (not creating a flipped copy).
 */
template <typename T>
<<<<<<< HEAD
void BinaryTree<T>::mirror()
{
    //your code here
    mirrorhelp(root);

=======
void BinaryTree<T>::mirror() {
    mirror(root);
}

template <typename T>
void BinaryTree<T>::mirror(Node * subRoot)
{
    //your code here
    //these all start with a NULL test so lets start there
    //struct Node* subroot = (struct *Node)malloc(sizeof)
    
    if (subRoot == NULL) {
        return;
    }
    Node * temp = subRoot->left;
    subRoot->left = subRoot->right;
    subRoot->right = temp;

    mirror(subRoot->left);
    mirror(subRoot->right);
>>>>>>> 9f41ed2504f5396df761b5bbbd4058b7bcd3ea1e
}
template<typename T>
void BinaryTree<T>::mirrorhelp(Node* subroot){
    if (subroot != NULL){
        mirrorhelp(subroot->left);
        mirrorhelp(subroot->right);
        Node* temp = subroot->left;
        subroot->left = subroot->right;
        subroot->right = temp;
    }
}

/**
 * isOrdered() function iterative version
 * @return True if an in-order traversal of the tree would produce a
 *  nondecreasing list output values, and false otherwise. This is also the
 *  criterion for a binary tree to be a binary search tree.
 */
template <typename T>
bool BinaryTree<T>::isOrderedIterative() const
{
    // your code here
<<<<<<< HEAD
  Node *temp = root;
while (temp->left !=NULL) {
  temp = temp->left;
}
  return isOrderedIterative(root, temp->elem);
=======
    InorderTraversal<T> trav(root);
    T element = (*trav.begin())->elem;
    for (typename TreeTraversal<int>::Iterator iterate = trav.begin(); iterate != trav.end(); ++iterate) {
        if ((*iterate)->elem < element) {
            return false;
        }
        element = (*iterate)->elem;
    }
    return true;
>>>>>>> 9f41ed2504f5396df761b5bbbd4058b7bcd3ea1e
}

template <typename T>
bool BinaryTree<T>::isOrderedIterative(Node* root,T data) const{
        if(root == NULL) return true;
        bool ordered = true;
        if (data > root->elem) ordered = false;
        ordered = ordered && isOrderedIterative(root->left, data);
        data=root->elem;
        ordered = ordered && isOrderedIterative(root->right, data);

       return ordered;
}
/**
 * isOrdered() function recursive version
 * @return True if an in-order traversal of the tree would produce a
 *  nondecreasing list output values, and false otherwise. This is also the
 *  criterion for a binary tree to be a binary search tree.
 */
template <typename T>
bool BinaryTree<T>::isOrderedRecursive() const
{
<<<<<<< HEAD

    // your code here
      Node *temp = root;
while (temp->left !=NULL) {
  temp = temp->left;
}
  return isOrderedIterative(root, temp->elem);
}

/**
 * creates vectors of all the possible paths from the root of the tree to any leaf
 * node and adds it to another vector.
 * Path is, all sequences starting at the root node and continuing
 * downwards, ending at a leaf node. Paths ending in a left node should be
 * added before paths ending in a node further to the right.
 * @param paths vector of vectors that contains path of nodes
 */
template <typename T>
void BinaryTree<T>::printPaths(vector<vector<T> > &paths) const
{
    stack<typename BinaryTree<T>::Node*> stack;
    typename BinaryTree<T>::Node* temp = root;

    vector<T> first;
    pushLeftInVectorandStack(first, stack, temp);
    paths.push_back(first);
    int i = 0;

    while (!stack.empty()) {
        while (!stack.empty() && stack.top()->right == NULL) {
        //    cout<<(stack.top())->elem<<endl;
            stack.pop();
        }
        if(stack.empty()) {
            break;
        }
        // first node has right child
        temp = stack.top();
        //cout<<i<<endl;
        vector<T> next;
        for (typename std::vector<T>::iterator it = paths[i].begin() ; it != paths[i].end() && *it != temp->elem; ++it){
            next.push_back(*it);
        }
        next.push_back(temp->elem);
        //avoid infinite loop
        //cout<<i<<endl;
        stack.pop();
        // push back right child tree
        typename BinaryTree<T>::Node* rightTree = temp->right;
        pushLeftInVectorandStack(next, stack, rightTree);
        paths.push_back(next);
        i++;
        //cout<<i<<endl;
        
    }
}
template <typename T>
void pushLeftInVectorandStack(vector<T> &v, stack<typename BinaryTree<T>::Node*> &s, typename BinaryTree<T>::Node*& subroot) {
    if (subroot != NULL) {
        while(subroot->left != NULL){
            s.push(subroot);
            v.push_back(subroot->elem);
            subroot = subroot->left;
        }
        if (subroot != NULL) {
            s.push(subroot);
            v.push_back(subroot->elem);
            if(subroot->right != NULL){
                s.pop();
                pushLeftInVectorandStack(v, s, subroot->right);
            }
        }
       
    }
    
}

/**
 * Each node in a tree has a distance from the root node - the depth of that
 * node, or the number of edges along the path from that node to the root. This
 * function returns the sum of the distances of all nodes to the root node (the
 * sum of the depths of all the nodes). Your solution should take O(n) time,
 * where n is the number of nodes in the tree.
 * @return The sum of the distances of all nodes to the root
 */
template <typename T>
int BinaryTree<T>::sumDistances() const
{
    // your code here
    return sumDistances(root,0);
}
template <typename T>
int BinaryTree<T>::sumDistances(Node* subroot,int dist)const{
  if (subroot!=NULL){
  return sumDistances(subroot->right,dist+1)+sumDistances(subroot->left,dist+1)+dist;
}
return 0;
=======
    
    return isOrderedRecursive(root);

}

template <typename T>
bool BinaryTree<T>::isOrderedRecursive(Node* subRoot) const
{
    
    if (subRoot == NULL) {
        return true;
    }
    if (subRoot->left != NULL && maxVal(subRoot->left) > subRoot->elem) {
        return false;
    }
    if (subRoot->right != NULL && minVal(subRoot->right) < subRoot->elem) {
        return false;
    }
    if (!isOrderedRecursive(subRoot->right) || !isOrderedRecursive(subRoot->right)) {
        return false;
    }
    return true;
    // } else if (subRoot->left == NULL && subRoot->right == NULL) {
    //     return true;
    // } else if (subRoot->left == NULL && subRoot->elem <= subRoot->right->elem) {
    //     return isOrderedRecursive(subRoot->right);
    // } else if (subRoot->right == NULL && subRoot->elem >= subRoot->left->elem) {
    //     return isOrderedRecursive(subRoot->left);
    // } else if (subRoot->elem <= subRoot->right->elem && subRoot->elem >= subRoot->left->elem) {
    //     return isOrderedRecursive(subRoot->left) && isOrderedRecursive(subRoot->right);
    // }
    // return false;
    // // your code here
    // unsigned rightest = 0;
    // unsigned leftest = ;
    
    // if (subRoot->right == NULL) {
    //     return (subRoot->left->elem < subRoot->elem && isOrderedRecursive(subRoot->left));
    // }
    // if (subRoot->left == NULL) {
    //     return (subRoot->right->elem > subRoot->elem && isOrderedRecursive(subRoot->right));
    // }
    // return (subRoot->right->elem > subRoot->elem && subRoot->left->elem < subRoot->elem && isOrderedRecursive(subRoot->left) && isOrderedRecursive(subRoot->right));
    // //return false;
}
template <typename T>
T BinaryTree<T>::maxVal(Node* subRoot) const {    
    T max = subRoot->elem;
    if (subRoot->left == NULL & subRoot->right == NULL) {
        return max;
    }
    if (subRoot->right != NULL) {
        T temp = maxVal(subRoot->right);
        if (temp > max) {
            max = temp;
        }
    }
    if (subRoot->left != NULL) {
        T temp = maxVal(subRoot->left);
        if (temp > max) {
            max = temp;
        }
    }
    return max;
}

template <typename T>
T BinaryTree<T>::minVal(Node* subRoot) const {
    T min = subRoot->elem;
    if (subRoot->left == NULL & subRoot->right == NULL) {
        return min;
    }
    if (subRoot->right != NULL) {
        T temp = minVal(subRoot->right);
        if (temp < min) {
            min = temp;
        }
    }
    if (subRoot->left != NULL) {
        T temp = maxVal(subRoot->left);
        if (temp < min) {
            min = temp;
        }
    }
    return min;
>>>>>>> 9f41ed2504f5396df761b5bbbd4058b7bcd3ea1e
}
