# HashFunction
 Chaining hash table implementation for ASU's CSE 310 Data Structures and Algorithms course, Spring 2024. This project uses the djb2 hashing function to distribute strings across table slots, aiming for low standard variance. It's designed to handle collisions through chaining, with each slot in the hash table being the head of a linked list. The program reads input strings and efficiently organizes them into the hash table, demonstrating key principles of hashing and collision resolution in C++.

 # Whats the goal for this assignment:
1.)The goal is, we nned to at minimum come up with a hash function that is able to beat professors algorithm? (How can we find out how fast professors algo is?).
2.) The next goal, not as importatnt is to create a efficent enough hash function that has a good enough standred distribution, to place us in the top 5 of all hash function codes in the class. If we can do this, then we are rewarded with 2 extra credit points(which would actullly mean a lot).
//Anything else?

# The Professors algorithm
-The professors algorithm has a standered diviation of 2.69 for the common500.txt, currently we have a run time of 3.1305, so we have alot of improving to be done, so we can get a better run time
-Another thing to note is that the class avrage is between a 2.7 and 3.5, so that once again confrims we need to shoot for a time of 2.7 and below.

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

# What are the constraints of the project

# The given algorithm tested:
-djb2 (time listed first below)
-murmur3 (next algo that we listed next)


# Possible Break Throughs:
Tweak the djb2 Algorithm: You can experiment with different constants in the djb2 algorithm. The original algorithm uses the number 33 as a multiplier, but you can try other prime numbers to see if they yield a better distribution for your dataset.

Use a Different Hash Function: If tweaking the djb2 algorithm doesn't give you satisfactory results, you can explore other hash functions. Some popular alternatives include:

MurmurHash: A fast and well-distributed non-cryptographic hash function.
CityHash: Developed by Google, it's optimized for hashing short strings.
FNV-1 and FNV-1a: Fast hash functions with good dispersion.
Customize the Hash Function: If you have specific knowledge about the characteristics of your input data, you can design a custom hash function that takes advantage of those characteristics to achieve a more uniform distribution.

Use a Hash Function Library: There are libraries available that provide implementations of various hash functions. Using a library can save you time and effort in implementing and testing different hash functions.

When experimenting with different hash functions, it's important to test the distribution of the hash values with your specific dataset to ensure that the chosen function provides a good balance between speed and uniformity.

=======could also consider the following========
If you just want to have a good hash function, and cannot wait, djb2 is one of the best string hash functions i know. it has excellent distribution and speed on many different sets of keys and table sizes. you are not likely to do better with one of the "well known" functions such as PJW, K&R[1], etc. Also see tpop pp.

According to a Reddit post, Murmur3 is recommended for short and simple hashing algorithms. 
According to a Stack Overflow post, the djb2 algorithm is a hash function for strings that is similar to a Linear Congruential Generator (LCG). The djb2 hash function is considered one of the best string hash functions, with excellent distribution and speed. 
According to a MiroTech article, the crc16, murmur2, and murmur3 implementations satisfy Pearson's chi-squared test of uniform distribution for almost all samples. The loseLose, Djb2, and Sdbm implementations failed the test. 

# Current speed of the Algorithm:

* Running encoder with input file: inputs/atoz.txt
==== Printing the contents of the first 5 slots ====
Slot 0: jumps brown 
Slot 1: The 
Slot 2: lazy over 
Slot 3: dog fox 
Slot 4: the quick 
==== Printing the slot lengths ====
Slot 0: 2
Slot 1: 1
Slot 2: 2
Slot 3: 2
Slot 4: 2
==== Printing the standard variance =====
0.4
-------------------------------------------------
* Running encoder with input file: inputs/bertuncased.txt
==== Printing the contents of the first 5 slots ====
Slot 0: errors resolve secular reverend investments cc payments strongest auction regiments boxer finest resolved accordance forbidden fin martinez lithuanian slopes 
Slot 1: swords sharon criticised caves contestants tragedy disappointment managers twitter sponsor bullets supervision 
Slot 2: chill nacional convent doll gotta certification loading sanchez poles renovation eleanor barracks artifacts ballot implement fantastic trainer anybody separately 
Slot 3: patricia ellie blown technological nash teenager stiff bombers bee allmusic dishes hostile helmet challenging belfast 
Slot 4: tu ink grasp monkey governmental cops airborne digging nationals trek hugged 
==== Printing the slot lengths ====
Slot 0: 19
Slot 1: 12
Slot 2: 19
Slot 3: 15
Slot 4: 11
Slot 5: 12
Slot 6: 16
Slot 7: 15
Slot 8: 17
Slot 9: 19
Slot 10: 12
Slot 11: 13
Slot 12: 11
Slot 13: 15
Slot 14: 14
Slot 15: 9
Slot 16: 10
Slot 17: 17
Slot 18: 10
Slot 19: 9
Slot 20: 15
Slot 21: 14
Slot 22: 11
Slot 23: 16
Slot 24: 15
==== Printing the standard variance =====
3.01569
-------------------------------------------------
* Running encoder with input file: inputs/common500.txt
==== Printing the contents of the first 5 slots ====
Slot 0: GAY ROOM EVERY WATER SPECIAL THOSE DEVELOPMENT RESEARCH M 
Slot 1: YAHOO JULY THREAD STOCK LEARN LITTLE TITLE LOVE BOARD BIG SHIPPING PHONE DESIGN JANUARY N EMAIL WILL IS 
Slot 2: PRINT CONTENT CHILDREN COMPUTER WEBSITE BLACK O IT 
Slot 3: TABLE SCIENCE TRAINING ARTICLE LINE DETAILS P NEW 
Slot 4: OLD UNITED COULD THROUGH MOST LIKE WHICH HE 
==== Printing the slot lengths ====
Slot 0: 9
Slot 1: 18
Slot 2: 8
Slot 3: 8
Slot 4: 8
Slot 5: 12
Slot 6: 16
Slot 7: 13
Slot 8: 8
Slot 9: 13
Slot 10: 13
Slot 11: 4
Slot 12: 10
Slot 13: 12
Slot 14: 6
Slot 15: 9
Slot 16: 13
Slot 17: 8
Slot 18: 9
Slot 19: 6
Slot 20: 6
Slot 21: 8
Slot 22: 13
Slot 23: 10
Slot 24: 13
Slot 25: 8
Slot 26: 8
Slot 27: 9
Slot 28: 10
Slot 29: 8
Slot 30: 12
Slot 31: 13
Slot 32: 10
Slot 33: 14
Slot 34: 15
Slot 35: 6
Slot 36: 7
Slot 37: 5
Slot 38: 12
Slot 39: 15
Slot 40: 12
Slot 41: 8
Slot 42: 5
Slot 43: 9
Slot 44: 9
Slot 45: 10
Slot 46: 6
Slot 47: 14
Slot 48: 12
Slot 49: 10
==== Printing the standard variance =====
3.1305
-------------------------------------------------
* Running encoder with input file: inputs/mit_a.txt
==== Printing the contents of the first 5 slots ====
Slot 0: Angle Anaheim Amy Amber 
Slot 1: Arabia Applicant Andrews Accurate 
Slot 2: Applicable Animals 
Slot 3: Arabic Anticipated Africa Acute 
Slot 4: Appropriations Applications Alone Agriculture Addressed Adaptor Accordance Accident 
==== Printing the slot lengths ====
Slot 0: 4
Slot 1: 4
Slot 2: 2
Slot 3: 4
Slot 4: 8
Slot 5: 4
Slot 6: 6
Slot 7: 4
Slot 8: 2
Slot 9: 5
Slot 10: 3
Slot 11: 7
Slot 12: 9
Slot 13: 6
Slot 14: 3
Slot 15: 4
Slot 16: 4
Slot 17: 6
Slot 18: 4
Slot 19: 6
Slot 20: 3
Slot 21: 7
Slot 22: 5
Slot 23: 6
Slot 24: 5
Slot 25: 5
Slot 26: 2
Slot 27: 7
Slot 28: 4
Slot 29: 2
Slot 30: 1
Slot 31: 8
Slot 32: 3
Slot 33: 7
Slot 34: 4
Slot 35: 3
Slot 36: 7
Slot 37: 10
Slot 38: 3
Slot 39: 7
Slot 40: 4
Slot 41: 4
Slot 42: 4
Slot 43: 6
Slot 44: 1
Slot 45: 2
Slot 46: 6
Slot 47: 6
Slot 48: 7
Slot 49: 1
Slot 50: 3
Slot 51: 9
Slot 52: 6
Slot 53: 10
Slot 54: 5
Slot 55: 5
Slot 56: 7
Slot 57: 8
Slot 58: 4
Slot 59: 4
Slot 60: 8
Slot 61: 8
Slot 62: 4
Slot 63: 6
Slot 64: 8
Slot 65: 8
Slot 66: 6
Slot 67: 4
Slot 68: 5
Slot 69: 1
Slot 70: 1
Slot 71: 9
Slot 72: 0
Slot 73: 4
Slot 74: 13
Slot 75: 7
Slot 76: 4
Slot 77: 1
Slot 78: 3
Slot 79: 5
Slot 80: 8
Slot 81: 3
Slot 82: 13
Slot 83: 5
Slot 84: 3
Slot 85: 5
Slot 86: 2
Slot 87: 4
Slot 88: 6
Slot 89: 4
Slot 90: 5
Slot 91: 6
Slot 92: 8
Slot 93: 6
Slot 94: 2
Slot 95: 5
Slot 96: 1
Slot 97: 7
Slot 98: 4
Slot 99: 2
==== Printing the standard variance =====
2.51396
-------------------------------------------------
* Running encoder with input file: inputs/sample_input.txt
==== Printing the contents of the first 5 slots ====
Slot 0: boring banana 
Slot 1: Applebee 
Slot 2: apple 
Slot 3: elephant  Boeing Amazon 
Slot 4: barbaric abandon 
==== Printing the slot lengths ====
Slot 0: 2
Slot 1: 1
Slot 2: 1
Slot 3: 3
Slot 4: 2
==== Printing the standard variance =====
0.748331
------------------------------------------------- 







