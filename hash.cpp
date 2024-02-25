#include <iostream>
#include <string>
#include "hash.h"

using namespace std;

// here is the hash.cpp file where we add the functionilty to our created functions from the header file

void insert(Node*& head, const std::string& key) {
    Node* newNode = new Node;
    newNode->key = key;
    newNode->next = head;
    head = newNode;
}


int hash_function(const string& text, int table_size) {
    unsigned long hash = 5381; // Initialize hash value
    int c;
    //note the djb2 hash function was created all the way in 1991
    //so there could be a better hashing function? can we
    //find a better hashing function with a given input of 500 n
    //====UNDERSTANDING THE DJB2 HASHING FUNCTION=========
    // the djb2 function is willey used in cryptography so
    //this means its gneric? we want to make one that is specifc
    //use the djb2 hash function which does the following:
    //starts with the hashvalue of 5381
    // starts with a hash variable which is set to 5381
    //then gets muitpled by 33
    //we then add thee ASCI value of the charcter to this value
    //then we keep doing this until we reach the end of the word
    
    for (size_t i = 0; i < text.length(); i++) {
        c = static_cast<unsigned char>(text[i]);
        hash = ((hash << 5) + hash) + c; // hash * 33 + c
    }

    return hash % table_size; // Modulo by the size of your hash table
}

