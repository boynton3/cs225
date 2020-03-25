/**
 * @file avltree.cpp
 * Definitions of the binary tree functions you'll be writing for this lab.
 * You'll need to modify this file.
 */
#include <algorithm>
using namespace std;

template <class K, class V>
V AVLTree<K, V>::find(const K& key) const
{
    return find(root, key);
}

template <class K, class V>
V AVLTree<K, V>::find(Node* subtree, const K& key) const
{
    if (subtree == NULL)
        return V();
    else if (key == subtree->key)
        return subtree->value;
    else {
        if (key < subtree->key)
            return find(subtree->left, key);
        else
            return find(subtree->right, key);
    }
}

template <class K, class V>
void AVLTree<K, V>::rotateLeft(Node*& t)
{
    functionCalls.push_back("rotateLeft"); // Stores the rotation name (don't remove this)
    // your code here
    // AVLTree * parent;
    // t = parent->left;
    // parent->left = t->right;
    // t->right = parent;
    // return t;
    if (t->right == NULL) {
        return;
    }
    
    Node * x = t->right;
    t->right = x->left;
    x->left = t;




    //update heights
    t->height = 1 + (heightOrNeg1(t->left) > heightOrNeg1(t->right) ? heightOrNeg1(t->left) : heightOrNeg1(t->right));
    x->height = 1 + (heightOrNeg1(x->left) > heightOrNeg1(x->right) ? heightOrNeg1(x->left) : heightOrNeg1(t->right));


    //return new root
    t = x;

}

template <class K, class V>
void AVLTree<K, V>::rotateLeftRight(Node*& t)
{
    functionCalls.push_back("rotateLeftRight"); // Stores the rotation name (don't remove this)
    // Implemented for you:
    rotateLeft(t->left);
    rotateRight(t);
}

template <class K, class V>
void AVLTree<K, V>::rotateRight(Node*& t)
{
    functionCalls.push_back("rotateRight"); // Stores the rotation name (don't remove this)
    // your code here
    // AVLTree * parent;
    // t = parent->right;
    // parent->right = t->left;
    // t->left = parent;
    // return t;
    if (t->left == NULL) {
        return;
    }

    Node * x = t->left;
    t->left = x->right;
    x->right = t;


    //update heights
    t->height = 1 + (heightOrNeg1(t->left) > heightOrNeg1(t->right) ? heightOrNeg1(t->left) : heightOrNeg1(t->right));
    x->height = 1 + (heightOrNeg1(x->left) > heightOrNeg1(x->right) ? heightOrNeg1(x->left) : heightOrNeg1(x->right));


    //return new root
    t = x;
    
}

template <class K, class V>
void AVLTree<K, V>::rotateRightLeft(Node*& t)
{
    functionCalls.push_back("rotateRightLeft"); // Stores the rotation name (don't remove this)
    // your code here
    rotateRight(t->right);
    rotateLeft(t);
}

template <class K, class V>
void AVLTree<K, V>::rebalance(Node*& subtree)
{
    // your code here

    //need to do this if tree was balane already
    //otherwise you might do rotations you don't need
    setHeight(root);
    if (subtree == NULL) {
        return;
    }
    
    int bal = getBalance(subtree);
    
    //since it's safe to assume subs = balanced
    //height can't be >2 (pos or neg)
    if (bal == -2) {
        //left side
        int left = heightOrNeg1(subtree->left->right) - heightOrNeg1(subtree->left->left);
        if (left <= -1) {
            rotateRight(subtree);
        } else if (left >= 1) {
            rotateLeftRight(subtree);
        }
    } else if (bal == 2) {
        //right side
        int right = heightOrNeg1(subtree->right->right) - heightOrNeg1(subtree->right->left);
        if (right <= -1) {
            rotateRightLeft(subtree);
        } else if (right >= 1) {
            rotateLeft(subtree);
        }
    }
    setHeight(root);  


}

template <class K, class V>
void AVLTree<K, V>::insert(const K & key, const V & value)
{
    insert(root, key, value);
}

template <class K, class V>
void AVLTree<K, V>::insert(Node*& subtree, const K& key, const V& value)
{
    // your code here
    if (subtree != NULL) {
        if (key < subtree->key) {
            insert(subtree->left, key, value);
        } else {
            insert(subtree->right, key, value);
        }
    
        rebalance(subtree);
        subtree->height = 1 + (heightOrNeg1(subtree->left) > heightOrNeg1(subtree->right) ? heightOrNeg1(subtree->left) : heightOrNeg1(subtree->right));
    } else {
        subtree = new Node(key, value);
    }
}

template <class K, class V>
void AVLTree<K, V>::remove(const K& key)
{
    remove(root, key);
}

template <class K, class V>
void AVLTree<K, V>::remove(Node*& subtree, const K& key)
{
    if (subtree == NULL) {
        return;
    }

    if (key < subtree->key) {
        // your code here
        remove(subtree->left, key);
        rebalance(subtree);
    } else if (key > subtree->key) {
        // your code here
        remove(subtree->right, key);
        rebalance(subtree);
    } else {
        if (subtree->left == NULL && subtree->right == NULL) {
            /* no-child remove */
            // your code here
            delete(subtree);
            subtree = NULL;

        } else if (subtree->left != NULL && subtree->right != NULL) {
            /* two-child remove */
            // your code here
            Node * x = subtree->left;
            Node * y = subtree; 
            
            while (x->right != NULL) {
                y = x;
                x = x->right;
            }
            swap(subtree,x);

            Node * temp = x;
            y->right = x->left;
            delete temp;
            
            
            // if(y != subtree) {
            //     y->right = NULL;
            // } else {right
            //     y->left = NULL;
            // }

            // delete x;
            // x = NULL;

            
        } else {
            /* one-child remove */
            // your code here
            if (subtree->left == NULL && subtree->right != NULL) {

                Node * temp = subtree;
                subtree = subtree->right;
                delete temp;
            } else if (subtree->left != NULL && subtree->right == NULL) {
                Node * temp = subtree;
                subtree = subtree->left;
                delete temp;
            }

        }

    }
    //might not need height stuff
    //subtree->height = 1 + (heightOrNeg1(subtree->left) > heightOrNeg1(subtree->right) ? heightOrNeg1(subtree->left) : heightOrNeg1(subtree->right));
    //rebalance(subtree);
}

//helper function(s)
template <class K, class V>
int AVLTree<K, V>::getBalance(Node *& n) {
    if (n == NULL) {
        return 0;
    }
    return heightOrNeg1(n->right) - heightOrNeg1(n->left);
}

template <class K, class V>
void AVLTree<K, V>::setHeight(Node *& n) {
    if (n == NULL) {
        return ;
    }
    n->height = heightOrNeg1(n);
    
    setHeight(n->left);
    setHeight(n->right);
}