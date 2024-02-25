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
