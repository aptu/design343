// Definition and implementation of HashTable. Implementation has to go in header file because class is templatized.

#ifndef HASHTABLE_H
#define HASHTABLE_H

template<typename K, typename V>
class HashTable{
    static const int MAX_IDS = 13127; // total number of possible 4 digit combination is 6561, 13127 is closest prime of double
public:
    HashTable<K, V>();
    ~HashTable<K, V>();
    void put(K key, V value);
private:
    struct HashEntry{
        K key;
        V value;
    };

};

template<typename K, typename V>
HashTable<K, V>::HashTable() {
    for(int i = 0; i < MAX_IDS; i++)

}

template<typename K, typename V>
HashTable<K, V>::~HashTable() {

}

template<typename K, typename V>
void HashTable<K, V>::put(K key, V value) {

}

#endif
