#ifndef HASH_H
#define HASH_H
#include <iostream>
#include <string>
#include <cmath>
#include <string>
using namespace std;

// You are free to use additional libraries as long as it's not PROHIBITED per instruction.

struct Node {
    std::string key;
    Node* next;
};

void insert(Node*& head, const std::string& key);


int hash_function(const string& text, int tableSize);

#endif // HASH_H