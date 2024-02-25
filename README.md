# HashFunction
 Chaining hash table implementation for ASU's CSE 310 Data Structures and Algorithms course, Spring 2024. This project uses the djb2 hashing function to distribute strings across table slots, aiming for low standard variance. It's designed to handle collisions through chaining, with each slot in the hash table being the head of a linked list. The program reads input strings and efficiently organizes them into the hash table, demonstrating key principles of hashing and collision resolution in C++.

# How can you run the program?
-First go to the directoy where main.cpp hash.h MakeFile and hash.cpp are located
-Next run the following command: g++-11 -o encoder main.cpp hash.cpp
-Once this command is ran, an encoder will be created
-Now to compile all the desired inputs located in the inputs folder run the following command:
-Once again make sure you are in the directory where the following files are located: (main.cpp hash.h MakeFile and hash.cpp_
-Then Run: for input_file in inputs/*.txt; do
    echo "Running encoder with input file: $input_file"
    ./encoder < "$input_file"
    echo "-------------------------------------------------"
done

# Possible Break Throughs:
Tweak the djb2 Algorithm: You can experiment with different constants in the djb2 algorithm. The original algorithm uses the number 33 as a multiplier, but you can try other prime numbers to see if they yield a better distribution for your dataset.

Use a Different Hash Function: If tweaking the djb2 algorithm doesn't give you satisfactory results, you can explore other hash functions. Some popular alternatives include:

MurmurHash: A fast and well-distributed non-cryptographic hash function.
CityHash: Developed by Google, it's optimized for hashing short strings.
FNV-1 and FNV-1a: Fast hash functions with good dispersion.
Customize the Hash Function: If you have specific knowledge about the characteristics of your input data, you can design a custom hash function that takes advantage of those characteristics to achieve a more uniform distribution.

Use a Hash Function Library: There are libraries available that provide implementations of various hash functions. Using a library can save you time and effort in implementing and testing different hash functions.

When experimenting with different hash functions, it's important to test the distribution of the hash values with your specific dataset to ensure that the chosen function provides a good balance between speed and uniformity.






