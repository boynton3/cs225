
/**
 * @file heap.cpp
 * Implementation of a heap class.
 */

template <class T, class Compare>
size_t heap<T, Compare>::root() const
{
    // @TODO Update to return the index you are choosing to be your root.
    return 0;
}

template <class T, class Compare>
size_t heap<T, Compare>::leftChild(size_t currentIdx) const
{
    // @TODO Update to return the index of the left child.
    return (2 * currentIdx + 1);
}

template <class T, class Compare>
size_t heap<T, Compare>::rightChild(size_t currentIdx) const
{
    // @TODO Update to return the index of the right child.
    return (2 * currentIdx + 2);
}

template <class T, class Compare>
size_t heap<T, Compare>::parent(size_t currentIdx) const
{
    // @TODO Update to return the index of the parent.
    return (currentIdx - 1)/2;
}

template <class T, class Compare>
bool heap<T, Compare>::hasAChild(size_t currentIdx) const
{
    // @TODO Update to return whether the given node has a child
    // size_t iMax = _elems.size();
    // if (2 * currentIdx + 2 <= iMax) {
    //     return true;
    // }
    // return false;
    if (_elems.size() > leftChild(currentIdx)) {
        return true;
    }
    return false;
}

template <class T, class Compare>
size_t heap<T, Compare>::maxPriorityChild(size_t currentIdx) const
{
    // @TODO Update to return the index of the child with highest priority
    ///   as defined by higherPriority()
    //acts like the < operator
    //so if leftChild current node has 5 data and
    //rightChild current node has 9 data
    //should return the index of the left child
    

    //create left and right children
    size_t left = leftChild(currentIdx);
    size_t right = rightChild(currentIdx);

    //if they have children, check the higherPriority
    if (hasAChild(currentIdx) && higherPriority(_elems[left], _elems[right])) {
        return left;
    } else {
        return right;
    }
    //might take this out
    return 0;
}

template <class T, class Compare>
void heap<T, Compare>::heapifyDown(size_t currentIdx)
{
    // @TODO Implement the heapifyDown algorithm.
    //worst case scenario, there is no where else to go down
    if (!hasAChild(currentIdx)) {
        return;
    }

    //might need to fix this...
    size_t parentIdx = maxPriorityChild(currentIdx);
    if (higherPriority(_elems[parentIdx], _elems[currentIdx])) {
        std::swap(_elems[currentIdx], _elems[parentIdx]);
        heapifyDown(parentIdx);
    }
}

template <class T, class Compare>
void heap<T, Compare>::heapifyUp(size_t currentIdx)
{
    if (currentIdx == root())
        return;
    size_t parentIdx = parent(currentIdx);
    if (higherPriority(_elems[currentIdx], _elems[parentIdx])) {
        std::swap(_elems[currentIdx], _elems[parentIdx]);
        heapifyUp(parentIdx);
    }
}

template <class T, class Compare>
heap<T, Compare>::heap()
{
    // @TODO Depending on your implementation, this function may or may
    ///   not need modifying
    // vector<int> heapVec;
    // int currentSize;
}

template <class T, class Compare>
heap<T, Compare>::heap(const std::vector<T>& elems) 
{
    // @TODO Construct a heap using the buildHeap algorithm
    //might change increment

    int size = elems.size();

    
    for (int i = 0; i < size; i++) {
        _elems.push_back(elems[i]);
    }

    for (int i = parent(size); i >= 0; i--) {
        heapifyDown(i);
    }
}

template <class T, class Compare>
T heap<T, Compare>::pop()
{
    // @TODO Remove, and return, the element with highest priority
    
    //remove last element
    // size_t s = _elems.size() - 1;
    // size_t last = _elems[s];
    // _elems.pop_back();

    // if (s > 1) {
    //     _elems[1] = last;
    //     heapifyDown(s);
    // }
    // return last;

    //like before but working with object T

    
    T last = _elems[0];
    _elems[0] = _elems[_elems.size() - 1];
    
    //need to swap last with root  ^^
    
    _elems.pop_back();
    
    heapifyDown(0);

    return last;
}

template <class T, class Compare>
T heap<T, Compare>::peek() const
{
    // @TODO Return, but do not remove, the element with highest priority
    //return T();
    //might need to cahnge this to call the root function
    
    //since we are zero indexing, if you do it this way
    //you'll need to check is size = 0, and if it does
    //return T()
    //return _elems[0];

    return _elems[root()];
}

template <class T, class Compare>
void heap<T, Compare>::push(const T& elem)
{
    // @TODO Add elem to the heap
    //add a new leaf
    _elems.push_back(elem);
    // size_t i = _elems.size() - 1;

    // while( i > 0) {
    //     _elems[i] = parent(i);
    //     heapifyDown(i);
    //     i = i - 1;
    // }
    // _elems[i] = elem;// size_t i = _elems.size() - 1;

    // while( i > 0) {
    //     _elems[i] = parent(i);
    //     heapifyDown(i);
    //     i = i - 1;
    // }
    // _elems[i] = elem;
    heapifyUp(_elems.size() - 1);
}

template <class T, class Compare>
void heap<T, Compare>::updateElem(const size_t & idx, const T& elem)
{
    // @TODO In-place updates the value stored in the heap array at idx
    // Corrects the heap to remain as a valid heap even after update
    // if (idx <= last _elem) {
    //     then goes is_unsignedif higherpriority heapify up 
    //     if not heapifyDown
    // }
    _elems[idx] = elem;

    heapifyDown(idx);
    heapifyUp(idx);
}


template <class T, class Compare>
bool heap<T, Compare>::empty() const
{
    // @TODO Determine if the heap is empty
    return _elems.empty();
    //return true;
}

template <class T, class Compare>
void heap<T, Compare>::getElems(std::vector<T> & heaped) const
{
    for (size_t i = root(); i < _elems.size(); i++) {
        heaped.push_back(_elems[i]);
    }
}
