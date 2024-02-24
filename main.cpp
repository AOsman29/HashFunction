/*
CSE 310 Hash Function DIY Contest
Instructor: Yiran "Lawrence" Luo
Your name(s): Abdalla Osman. Breck
Your team alias: 
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include "hash.h"
using namespace std;

int main() {

    int k = 0;
    int n = 0;
    string texts[500];

    // WARNING: Start of the tokenizer that loads the input from std::cin, DO NOT change this part!
    cin >> k;
    string line;
    getline(cin, line);

    while (getline(cin, line)) {
        texts[n] = line;
        n++;
    }
    // WARNING: End of the tokenizer, DO NOT change this part!
    // Initialize your hash table here
    Node* hashTable[k]; // Assuming you have a Node struct for your linked list
    for (int i = 0; i < k; i++) {
        hashTable[i] = nullptr;
    }

    // Hash each string and insert it into the hash table
    for (int i = 0; i < n; i++) {
        int hash_index = hash_function(texts[i], k);
        // Insert texts[i] into the hash table at index hash_index
        insert(hashTable[hash_index], texts[i]);
    }
    // By this point, k is the # of slots, and n is the # of tokens to fit in
    // texts[] stores the input sequence of tokens/keys to be inserted into your hash table

    // The template is able to be compiled by running 
    //   make
    //   ./encoder < inputs/sample_input.txt
    // which puts out the placeholders only.

    // Your time to shine starts now

    cout << "==== Printing the contents of the first 5 slots ====" << endl;
   
    for (int i = 0; i < min(k, 5); i++) { // Print first 5 slots or less if k < 5
        cout << "Slot " << i << ": ";
        Node* current = hashTable[i];
        while (current != nullptr) {
            cout << current->key << " ";
            current = current->next;
        }
        cout << endl;
    }
    cout << "==== Printing the slot lengths ====" << endl;

    for (int i = 0; i < k; i++) {
        int length = 0;
        Node* current = hashTable[i];
        while (current != nullptr) {
            length++;
            current = current->next;
        }
        cout << "Slot " << i << ": " << length << endl;
    }

    double mean = static_cast<double>(n) / k;
    double variance = 0;
    for (int i = 0; i < k; i++) {
        int length = 0;
        Node* current = hashTable[i];
        while (current != nullptr) {
            length++;
            current = current->next;
        }
        variance += (length - mean) * (length - mean);
    }
    variance /= k; // Don't forget to divide the total variance by the number of slots
    double stdDev = sqrt(variance); // Calculate the standard deviation

    cout << "==== Printing the standard variance =====" << endl;

    cout << stdDev << endl;

    return 0;
}
// possible things to speed up
// what are the given constraints?
//we know that we cannot have more than 500 words since n > 500
//Any other constrains ?:
