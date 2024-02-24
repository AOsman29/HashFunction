#include <iostream>
#include <string>
#include "hash.h"

using namespace std;

void insert(Node*& head, const std::string& key) {
    Node* newNode = new Node;
    newNode->key = key;
    newNode->next = head;
    head = newNode;
}




int hash_function(const string& text, int table_size) {
    unsigned long hash = 5381; // Initialize hash value
    int c;

    for (size_t i = 0; i < text.length(); i++) {
        c = static_cast<unsigned char>(text[i]);
        hash = ((hash << 5) + hash) + c; // hash * 33 + c
    }

    return hash % table_size; // Modulo by the size of your hash table
}

