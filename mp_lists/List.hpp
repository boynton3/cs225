/**
 * @file list.cpp
 * Doubly Linked List (MP 3).
 */

template <class T>
List<T>::List() { 
  // @TODO: graded in MP3.1
  length_ = 0;
  head_ = NULL;
  tail_ = NULL;
}

/**
 * Returns a ListIterator with a position at the beginning of
 * the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::begin() const {
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(head_);
}

/**
 * Returns a ListIterator one past the end of the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::end() const {
  // @TODO: graded in MP3.1
  if (tail_ != NULL) {
  return List<T>::ListIterator(tail_->next);
  } else {
    return List<T>::ListIterator(NULL);
  }
}


/**
 * Destroys all dynamically allocated memory associated with the current
 * List class.
 */
template <typename T>
void List<T>::_destroy() {
  // @todo Graded in MP3.1
  ListNode * old;
  while (head_ != NULL) {
    old = head_-> next;
    delete head_;
    head_ = old;
  }
  length_ = 0;
  
}

/**
 * Inserts a new node at the front of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertFront(T const & ndata) {
  /// @todo Graded in MP3.1
  ListNode * newNode = new ListNode(ndata);

  //if the list is empty 
  if (head_ == NULL) {
    head_ = newNode;
    tail_ = newNode;
    length_ = 1;
  } else {
    ///otherwise, make the newnodes neighbor the head
    //make the node before it empty (since its at the front)
    //set the head's previous node to be the new node
    //set head to be newnode
    //increase the length
    newNode-> next = head_;
    newNode-> prev = NULL;
    head_ -> prev = newNode;
    head_ = newNode;
    length_++;
    
  }
}

/**
 * Inserts a new node at the back of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertBack(const T & ndata) {
  /// @todo Graded in MP3.1

  ListNode * newNode = new ListNode(ndata);
  
  if (tail_ == NULL) {
    head_ = newNode;
    tail_ = newNode;
    length_ = 1;
  } else {
    newNode->prev = tail_;
    newNode->next = NULL;
    tail_->next = newNode;
    tail_ = newNode;
    length_++;
  }
}

/**
 * Helper function to split a sequence of linked memory at the node
 * splitPoint steps **after** start. In other words, it should disconnect
 * the sequence of linked memory after the given number of nodes, and
 * return a pointer to the starting node of the new sequence of linked
 * memory.
 *
 * This function **SHOULD NOT** create **ANY** new List or ListNode objects!
 *
 * This function is also called by the public split() function located in
 * List-given.hpp
 *
 * @param start The node to start from.
 * @param splitPoint The number of steps to walk before splitting.
 * @return The starting node of the sequence that was split off.
 */
template <typename T>
typename List<T>::ListNode * List<T>::split(ListNode * start, int splitPoint) {
  /// @todo Graded in MP3.1

  if (splitPoint == 0 || start == NULL) {
    return start;
  }

  ListNode * curr = start;

  

  for (int i = 0; i < splitPoint; i++) {
    //need to check if we can even do this
    if (curr->next == NULL) {
      break;
    } else {
      curr = curr->next;
    }
  }

  //might remove the second part
  if (curr != NULL) {
      curr->prev->next = NULL;
      curr->prev = NULL;

     
      return curr;
  }

  return NULL;
}




/**
  * Modifies List using the rules for a TripleRotate.
  *
  * This function will to a wrapped rotation to the left on every three 
  * elements in the list starting for the first three elements. If the 
  * end of the list has a set of 1 or 2 elements, no rotation all be done 
  * on the last 1 or 2 elements.
  * 
  * You may NOT allocate ANY new ListNodes!
  */
template <typename T>
void List<T>::tripleRotate() {
  // @todo Graded in MP3.1
  //take 3 elements at a time and flip them
  //then go to the next three and flip em
  //if there are less than three elements
  //just dont do it
  if (this->length_ < 3) {
    return;
  }

  ListNode * first = head_;
  ListNode * second = first->next;
  ListNode * third = second->next;
  ListNode * temp;
  

  int triple = length_;
  int ct = 0;

  while (triple >= 3) {

    if (triple > 3) {
      //sets the header of the next three elemenets
      third->next->prev = first;
    }

    
    temp = first->prev;
    first->next = third->next;
    third->next = first;
    first->prev = third;
    second->prev = temp;

    if (triple == length_) {
      head_ = second;
    }

    if (triple == 3) {
      tail_ = first;
    }   
   
    if (ct > 0) {
      second->prev->next = second;
    }



    first = first->next;
    if (first == NULL) {
      return;
    }
    second = first->next;
    third = second->next;


    triple = triple - 3;
    ct++;
    


  }



}

/**
 * Reverses the current List.
 */
template <typename T>
void List<T>::reverse() {
  reverse(head_, tail_);
}

/**
 * Helper function to reverse a sequence of linked memory inside a List,
 * starting at startPoint and ending at endPoint. You are responsible for
 * updating startPoint and endPoint to point to the new starting and ending
 * points of the rearranged sequence of linked memory in question.
 *
 * @param startPoint A pointer reference to the first node in the sequence
 *  to be reversed.
 * @param endPoint A pointer reference to the last node in the sequence to
 *  be reversed.
 */
template <typename T>
void List<T>::reverse(ListNode *& startPoint, ListNode *& endPoint) {
  /// @todo Graded in MP3.2
  if (startPoint == NULL || endPoint == NULL) {
    return;
  }

  ListNode * curr = NULL;

  ListNode * begining = startPoint;
  ListNode * ending = endPoint;

  //flip em around first and then change the ones in between
  startPoint = endPoint;
  endPoint = begining;


  //as long as the current is not the end
  while (curr != ending) {
    //set the start
    curr = begining;
    //the new start point is the next node
    begining = begining->next;
    
    curr->next = curr->prev;
    curr->prev = begining;

  }

  //these check if the list only has 1 node
  //in wich case they'll both be the start/end
  // if the endPoint is the start of the list
  //make the head_ the startPoint too
  if (endPoint == head_) {
    head_ = startPoint;
  }
  
  //if the startPoint is the end of the list
  //make the tail_ the endPint too
  if (startPoint == tail_) {
    tail_ = endPoint;
  }

  //now we have to flip it back
  
  //if there is only one element
  if (endPoint->next == NULL) {
    startPoint->prev = NULL;
  } else {
    //else there are multple elements
    //and we flip them back from that point
    endPoint->next->next = startPoint;
    startPoint->prev = endPoint->next;
  }

  //flip it on over for the start
  if (begining != NULL) {
    endPoint->next = begining;
    begining->prev = endPoint;
  }
  if (begining == NULL) {
    endPoint->next = NULL;
  }

  


}

/**
 * Reverses blocks of size n in the current List. You should use your
 * reverse( ListNode * &, ListNode * & ) helper function in this method!
 *
 * @param n The size of the blocks in the List to be reversed.
 */
template <typename T>
void List<T>::reverseNth(int n) {
  /// @todo Graded in MP3.2
  ListNode * begining = head_;
  ListNode * ending = head_;

  while (ending != NULL) {
    //while i is still less than the size we want
    for (int i = 0; i < n-1; i++) {
      //keep going through unil there is nothing after the 
      //end so long we are still within the size
      if (ending->next != NULL) {
        ending = ending->next;
      } else {
        break;
      }
    }
      //make this shit recursive so
      //I don't have to do as much
      reverse(begining, ending);
      //you have to change begining FIRST
      begining = ending->next;
      ending = begining;
    
  }
}


/**
 * Merges the given sorted list into the current sorted list.
 *
 * @param otherList List to be merged into the current list.
 */
template <typename T>
void List<T>::mergeWith(List<T> & otherList) {
    // set up the current list
    head_ = merge(head_, otherList.head_);
    tail_ = head_;

    // make sure there is a node in the new list
    if (tail_ != NULL) {
        while (tail_->next != NULL)
            tail_ = tail_->next;
    }
    length_ = length_ + otherList.length_;

    // empty out the parameter list
    otherList.head_ = NULL;
    otherList.tail_ = NULL;
    otherList.length_ = 0;
}

/**
 * Helper function to merge two **sorted** and **independent** sequences of
 * linked memory. The result should be a single sequence that is itself
 * sorted.
 *
 * This function **SHOULD NOT** create **ANY** new List objects.
 *
 * @param first The starting node of the first sequence.
 * @param second The starting node of the second sequence.
 * @return The starting node of the resulting, sorted sequence.
 */
template <typename T>
typename List<T>::ListNode * List<T>::merge(ListNode * first, ListNode* second) {
  /// @todo Graded in MP3.2

  //example from https://algorithms.tutorialhorizon.com/merge-sort-in-a-linked-list/

  ListNode * temp = NULL;

  //we can't edit them directly
  //we have to modify pointers to them!!
  ListNode * one = first;
  ListNode * two = second;

  if (first == NULL && second == NULL) {
    return NULL;
  }

  if (first == NULL) {
      return second;
  } 
  
  if (second == NULL) {
      return first;
  }

  //you can't compare > 
  //you have to compare < for some reason

  //these sort the head cases
  if (two -> data < one->data) {
    temp = two;
    two = two->next;
  } else {
    temp = one;
    one = one->next;
  }

  //right now, temp is that smaller list
  //we need if first is NULL
  //if second is NULL
  ///if first < second
  //is second < first


  //Do NOT touch this
  while (one !=NULL || two != NULL) {
    //if second is NUll
    //if first < second
    if ((one != NULL && one->data < two->data) || two == NULL) {
      temp->next = one;
      one->prev = temp;

      temp = temp->next;
      one = one->next;

    } else {
      //if first is NULL
      //or if second < first
      temp->next = two;
      two->prev = temp;

      temp = temp->next;
      two = two->next;
      //std::cout << "printing" << std::endl;
    }
  }
  
  //return based on the information AFTER we switch everything
  if ((first->data) < (second->data)) {
    return first;
  } else {
    return second;
  }

  //otherwise we're f*cked
  return NULL;
}

/**
 * Sorts a chain of linked memory given a start node and a size.
 * This is the recursive helper for the Mergesort algorithm (i.e., this is
 * the divide-and-conquer step).
 *
 * Called by the public sort function in List-given.hpp
 *
 * @param start Starting point of the chain.
 * @param chainLength Size of the chain to be sorted.
 * @return A pointer to the beginning of the now sorted chain.
 */
template <typename T>
typename List<T>::ListNode* List<T>::mergesort(ListNode * start, int chainLength) {
  /// @todo Graded in MP3.2

  //base cases
  if (chainLength == 0) {
    return start;
  }
  if (chainLength == 1) {
    return start;
  }
  if (start == NULL) {
    return NULL;
  }

  //first half and then the second half
  int n = chainLength/2;
  int first = chainLength - n;
  int second = chainLength - first;

  //split it
  //these are the two split and more manageble parts
  ListNode * listL = mergesort(start, first);
  ListNode * splitting = split(start, n);
  
  //make sense of the lists
  //make this sh*t recursive
  
  //what if the length is an odd chain length dingus
  //sort them
  //ListNode * listL = mergesort(start, first);
  ListNode * listR = mergesort(splitting, second);
  

  //merge them back together
  //use your stupid helper function
  //even though it doesn't help, all it does is hurt me
  //merge them
  return merge(listL, listR);

}

//ARE YOU FRIGGEN KIDDING ME
//HOW WAS I SUPPOSE TO SEE THIS??

//okay you lucky, 5 minutes, one function, go

