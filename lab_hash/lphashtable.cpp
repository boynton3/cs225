/**
 * @file lphashtable.cpp
 * Implementation of the LPHashTable class.
 */
#include "lphashtable.h"

template <class K, class V>
LPHashTable<K, V>::LPHashTable(size_t tsize)
{
    if (tsize <= 0)
        tsize = 17;
    size = findPrime(tsize);
    table = new std::pair<K, V>*[size];
    should_probe = new bool[size];
    for (size_t i = 0; i < size; i++) {
        table[i] = NULL;
        should_probe[i] = false;
    }
    elems = 0;
}

template <class K, class V>
LPHashTable<K, V>::~LPHashTable()
{
    for (size_t i = 0; i < size; i++)
        delete table[i];
    delete[] table;
    delete[] should_probe;
}

template <class K, class V>
LPHashTable<K, V> const& LPHashTable<K, V>::operator=(LPHashTable const& rhs)
{
    if (this != &rhs) {
        for (size_t i = 0; i < size; i++)
            delete table[i];
        delete[] table;
        delete[] should_probe;

        table = new std::pair<K, V>*[rhs.size];
        should_probe = new bool[rhs.size];
        for (size_t i = 0; i < rhs.size; i++) {
            should_probe[i] = rhs.should_probe[i];
            if (rhs.table[i] == NULL)
                table[i] = NULL;
            else
                table[i] = new std::pair<K, V>(*(rhs.table[i]));
        }
        size = rhs.size;
        elems = rhs.elems;
    }
    return *this;
}

template <class K, class V>
LPHashTable<K, V>::LPHashTable(LPHashTable<K, V> const& other)
{
    table = new std::pair<K, V>*[other.size];
    should_probe = new bool[other.size];
    for (size_t i = 0; i < other.size; i++) {
        should_probe[i] = other.should_probe[i];
        if (other.table[i] == NULL)
            table[i] = NULL;
        else
            table[i] = new std::pair<K, V>(*(other.table[i]));
    }
    size = other.size;
    elems = other.elems;
}

template <class K, class V>
void LPHashTable<K, V>::insert(K const& key, V const& value)
{

    /**
     * @todo Implement this function.
     *
     * @note Remember to resize the table when necessary (load factor >= 0.7).
     * **Do this check *after* increasing elems (but before inserting)!!**
     * Also, don't forget to mark the cell for probing with should_probe!
     */

    //(void) key;   // prevent warnings... When you implement this function, remove this line.
    //(void) value; // prevent warnings... When you implement this function, remove this line.

    ++elems;

    if (shouldResize() == true) {
        resizeTable();
    }

    //table = new std::list<std::pair<K, V>> pairing(key, value);
    //override with size_t
    //just like operator functions
    size_t idx = hashes::hash(key,size);
    //std::pair<K, V> p(key, value);
    //need to checks
    while(should_probe[idx]) {
    //while(should_probe[idx]) {
        //if (table[idx] == NULL) {
        ++idx;    
        idx = idx%size;
    }
    table[idx] = new std::pair<K, V> (key, value);
    should_probe[idx] = true;
    
    
    //should_probe[idx] = true;
    //table[idx].push_front(p);


}

template <class K, class V>
void LPHashTable<K, V>::remove(K const& key)
{
    /**
     * @todo: implement this function
     */

    int index = findIndex(key);

    if (index > -1) {
        delete table[index];

        table[index] = NULL;
        //need to include should_probe stuff
        should_probe[index] = false;
        --elems;
    }
}

template <class K, class V>
int LPHashTable<K, V>::findIndex(const K& key) const
{
    
    /**
     * @todo Implement this function
     *
     * Be ca        for (it = table[idx].begin(); it != table[idx].end(); it++) {
            //insert(it->first, it->second);
            //need to hash
            size_t hashIdx = hashes::hash(it->first, ts);
            //might use insert instead
            std::pair<K,V> temporary(it->first, it->second);
            temp[hashIdx].push_front(temporary); 
            
  
        }
    }reful in determining when the key is not in the table!
     */
    size_t idx = hashes::hash(key,size);
    //std::pair<K, V> p(key, size);
    size_t temp = idx;

    while(should_probe[idx]) {
        if (table[idx] != NULL && table[idx]->first == key) {
            return idx;
        }
        //then adjust
        idx++;
        idx %= size;

        //this checks for loop, and if we can insert
        if(idx == temp) {
            break;
        }
    }
    return -1;

    //YOURE DOING TOO MUCH
    //but whatever idget it works
    //sike this don't work

    // for (size_t idx = 0; idx < size; ++idx) {
    //     if (table[idx] != NULL && table[idx]->first == key) {
    //         return idx;
    //     }
    // }
    // return -1;
}

template <class K, class V>
V LPHashTable<K, V>::find(K const& key) const
{
    int idx = findIndex(key);
    if (idx != -1)
        return table[idx]->second;
    return V();
}

template <class K, class V>
V& LPHashTable<K, V>::operator[](K const& key)
{
    // First, attempt to find the key and return its value by reference
    int idx = findIndex(key);
    if (idx == -1) {
        // otherwise, insert the default value and return it
        insert(key, V());
        idx = findIndex(key);
    }
    return table[idx]->second;
}

template <class K, class V>
bool LPHashTable<K, V>::keyExists(K const& key) const
{
    return findIndex(key) != -1;
}

template <class K, class V>
void LPHashTable<K, V>::clear()
{
    for (size_t i = 0; i < size; i++)
        delete table[i];
    delete[] table;
    delete[] should_probe;
    table = new std::pair<K, V>*[17];
    should_probe = new bool[17];
    for (size_t i = 0; i < 17; i++)
        should_probe[i] = false;
    size = 17;
    elems = 0;
}

template <class K, class V>
void LPHashTable<K, V>::resizeTable()
{

    /**
     * @todo Implement this function
     *
     * The size of the table should be the closest prime to size * 2.
     *
     * @hint Use findPrime()!
     */
    size_t ts = findPrime(2 * size);
    std::pair<K,V> ** temp = new std::pair<K, V>*[ts];
    
    //need to fix this
    bool * check = new bool[ts];


    for (size_t idx = 0; idx < ts; ++idx) {
        
        // temp[idx].resize(table[idx].size());
        // typename std::list<std::pair<K, V>>::iterator newIt = temp[idx].begin();
        temp[idx] = NULL;
        check[idx] = false;
    }
    for (size_t idx = 0; idx < size; ++idx) {
        if(table[idx]) {
            size_t hashIdx = hashes::hash(table[idx]->first, ts);
            while(temp[hashIdx]) {
                ++hashIdx;
                hashIdx %= size;
            }
            temp[hashIdx] = table[idx];
            check[hashIdx] = true;
        }
    }
        //we have to rehash everything

    delete[] table;
    delete[] should_probe;
    table = temp;
    should_probe = check; 
    size = ts;
}
