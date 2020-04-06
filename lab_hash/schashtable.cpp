/**
 * @file schashtable.cpp
 * Implementation of the SCHashTable class.
 */

#include "schashtable.h"
#include <iostream>
 
template <class K, class V>
SCHashTable<K, V>::SCHashTable(size_t tsize)
{
    if (tsize <= 0)
        tsize = 17;
    size = findPrime(tsize);
    table = new std::list<std::pair<K, V>>[size];
    elems = 0;
}

template <class K, class V>
SCHashTable<K, V>::~SCHashTable()
{
    delete[] table;
}

template <class K, class V>
SCHashTable<K, V> const& SCHashTable<K, V>::
operator=(SCHashTable<K, V> const& rhs)
{
    if (this != &rhs) {
        delete[] table;
        table = new std::list<std::pair<K, V>>[rhs.size];
        for (size_t i = 0; i < rhs.size; i++)
            table[i] = rhs.table[i];
        size = rhs.size;
        elems = rhs.elems;
    }
    return *this;
}

template <class K, class V>
SCHashTable<K, V>::SCHashTable(SCHashTable<K, V> const& other)
{
    table = new std::list<std::pair<K, V>>[other.size];
    for (size_t i = 0; i < other.size; i++)
        table[i] = other.table[i];
    size = other.size;
    elems = other.elems;
}

template <class K, class V>
void SCHashTable<K, V>::insert(K const& key, V const& value)
{

    /**
     * @todo Implement this function.
     *
     */
    // table = new std::list<std::pair<K, V>>[rhs.size];
    // for (size_t i = 0; i < rhs.size; i++)
    //     table[i] = rhs.table[i];

    

    //table = new std::list<std::pair<K, V>> pairing(key, value);
    //override with size_t
    //just like operator functions
    size_t idx = hashes::hash(key, size);
    std::pair<K, V> p(key, value);
    table[idx].push_front(p);

    ++elems;
    

    if (shouldResize() == true) {
        resizeTable();
    }
}

template <class K, class V>
void SCHashTable<K, V>::remove(K const& key)
{
    typename std::list<std::pair<K, V>>::iterator it;
    /**
     * @todo Implement this function.
     *
     * Please read the note in the lab spec about list iterators and the
     * erase() function on std::list!
     */
    //(void) key; // prevent warnings... When you implement this function, remove this line.

    size_t idx = hashes::hash(key, size);
    //typename std::list<std::pair<K, V>>::iterator it;
    for (it = table[idx].begin(); it != table[idx].end(); ++it) {
        if (it->first == key){
            table[idx].erase(it);
            //might be an operator for this
            //elems = elems - 1;
            //--elems;
            break;
        }
    }
    //return V();

}

template <class K, class V>
V SCHashTable<K, V>::find(K const& key) const
{

    /**
     * @todo: Implement this function.
     */
    //just like the operator functions
    size_t idx = hashes::hash(key, size);
    typename std::list<std::pair<K, V>>::iterator it;
    for (it = table[idx].begin(); it != table[idx].end(); ++it) {
        if (it->first == key) {
            return it->second;
        }
    }
    return V();
}

template <class K, class V>
V& SCHashTable<K, V>::operator[](K const& key)
{
    size_t idx = hashes::hash(key, size);
    typename std::list<std::pair<K, V>>::iterator it;
    for (it = table[idx].begin(); it != table[idx].end(); it++) {
        if (it->first == key)
            return it->second;
    }

    // was not ftable[idx] = new std::pair<K, V> (key, value);
    ++elems;
    if (shouldResize())
        resizeTable();

    idx = hashes::hash(key, size);
    std::pair<K, V> p(key, V());
    table[idx].push_front(p);
    return table[idx].front().second;
}

template <class K, class V>
bool SCHashTable<K, V>::keyExists(K const& key) const
{
    size_t idx = hashes::hash(key, size);
    typename std::list<std::pair<K, V>>::iterator it;
    for (it = table[idx].begin(); it != table[idx].end(); it++) {
        if (it->first == key)
            return true;
    }
    return false;
}

template <class K, class V>
void SCHashTable<K, V>::clear()
{
    delete[] table;
    table = new std::list<std::pair<K, V>>[17];
    size = 17;
    elems = 0;
}

template <class K, class V>
void SCHashTable<K, V>::resizeTable()
{
    typename std::list<std::pair<K, V>>::iterator it;
    /**
     * @todo Implement this function.
     *
     * Please read the note in the spec about list iterators!
     * The size of the table should be the closest prime to size * 2.
     *
     * @hint Use findPrime()!
     */
    // int old = tableSize;
    // tableSize *= 2;

    //There is a findPrime function
    //OVERRIDE THE SIZE
    //tableSize might = size
    // size_t ts = findPrime(2 * size);
    // std::list<std::pair<K, V>> * t = new std::list<std::pair<K, V>>[ts];
    
    //old values need to be saved to copy over properly
    //size_t oldS = size;
    //std::list<std::pair<K,V>> * old = table;

    size_t ts = findPrime(2 * size);
    std::list<std::pair<K,V>> * temp = new std::list<std::pair<K, V>>[ts];
    for (size_t idx = 0; idx < size; ++idx) {
        
        //temp[idx].resize(table[idx].size());
        //typename std::list<std::pair<K, V>>::iterator newIt = temp[idx].begin();
        //we have to rehash everything
        for (it = table[idx].begin(); it != table[idx].end(); ++it) {
            //insert(it->first, it->second);
            //need to hash
            size_t hashIdx = hashes::hash(it->first, ts);
            //might use insert instead
            std::pair<K,V> p(it->first, it->second);
            temp[hashIdx].push_front(p); 
            
  
        }
    }
    delete[] table;
    table = temp; 
    size = ts;
}