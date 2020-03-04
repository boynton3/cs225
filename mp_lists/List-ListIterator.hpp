
class ListIterator : public std::iterator<std::bidirectional_iterator_tag, T> {
  private:
    ListNode* position_;

  public:
    ListIterator() : position_(NULL) { }
    ListIterator(ListNode* x) : position_(x) { }

    // Pre-Increment, ++iter
    ListIterator& operator++() {
        // @TODO: graded in MP3.1
        //go to the next one;
        position_ = position_->next;
        return *this;
    }
    
    // Post-Increment, iter++
    ListIterator operator++(int) {
        // @TODO: graded in MP3.1
        ListNode* temp = position_;
        position_ = position_->next;
        return ListIterator(temp);
    }

    // Pre-Decrement, --iter
    ListIterator& operator--() {
        // @TODO: graded in MP3.1
        position_ = position_->prev;
        return *this;
    }

    // Post-Decrement, iter--
    ListIterator operator--(int) {
        // @TODO: graded in MP3.1
        ListNode* copy = position_;
        position_ = position_->prev;
        return ListIterator(copy);
    }

    bool operator!=(const ListIterator& rhs) {
        //doesn't use rhs yet
        return position_ != rhs.position_;
        // @TODO: graded in MP3.1
        //return false;
    }

    bool operator==(const ListIterator& rhs) {
        return !(*this != rhs);
    }

    const T& operator*() {
        return position_->data;
    }

    const T* operator->() {
        return &(position_->data);
    }
};
