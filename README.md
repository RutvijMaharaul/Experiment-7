# Experiment-7
Aim: To write and execute C++ programs using arrays and strings for various applications such as searching, finding highest/lowest values, calculating averages, palindrome checking, reversing strings, and printing elements.

Software Required: Visual Studio (or any C++ compiler such as Code::Blocks, Turbo C++, or Dev C++)

Theory: Arrays in C++: An array is a collection of elements of the same data type stored in contiguous memory locations. Arrays are used to store lists such as numbers, marks, temperatures, etc. Each element is accessed via its index (starting from 0). Arrays allow efficient storage, retrieval, and processing of bulk data using loops. Strings in C++: A string is a sequence of characters terminated by a null character \0. In C++, strings can be handled in two ways: Character arrays (C-style strings) String class (#include )

Applications: Arrays and strings are widely used for: Searching and sorting Finding max/min values Summing and averaging Pattern matching Palindrome checking Reversing content

Algorithms:

7a. Finding Number in a Given Array Start Input array size and elements Input the number to search Traverse the array and compare each element If found, display index or success message If not found, display not found message End

7b. Finding Lowest and Highest Number Start Input array size and elements Initialize lowest and highest to the first element Traverse the array using a loop Update lowest and highest when a smaller or larger element is found Display the lowest and highest End

7c. Mark Finder Start Input roll numbers and corresponding marks into arrays Input the roll number to be searched Traverse array to find roll number If found, display corresponding marks If not found, display “not found” End

7d. Create Marks Recorder Start Input number of students and subjects Input marks for each student in all subjects using 2D array Calculate total and average for each student Display total, average, and marks End

7e. Palindrome Checker (String) Start Input string Initialize two pointers: start (0), end (length-1) Compare characters while moving inward If all characters match, display "Palindrome" Else display "Not Palindrome" End

7f. Printing Array Elements Start Input size and elements of array Traverse and print each element using loop End

7g. Create String Reverse Start Input string Find length Swap characters from start and end moving towards the center Display reversed string End

7h. Sum and Average of Array Elements Start Input array size and elements Initialize sum = 0 Traverse array, adding each element to sum Calculate average = sum / size Display sum and average End

Implementation Summary: Each task can be implemented with simple loop structures and conditionals. Here's a brief description: Searching involves comparing each element with the target. Finding Max/Min involves initializing a variable and updating it as needed. Palindrome checking and reversing require pointers or index manipulation. Mark recorders use 2D arrays and nested loops. Sum/Average is a typical accumulator-based approach.

Conclusion: Through this experiment, we practiced using arrays and strings in C++ for a variety of basic yet essential operations. This included: Searching and comparison Calculating highest and lowest values Handling multiple students' marks Checking palindromes and reversing strings Calculating sums and averages

These tasks reinforced our understanding of: Arrays and string data handling Looping and conditional structures Efficient use of memory through arrays Logical thinking for problem-solving in C++

This experiment helps build a strong foundation in C++ programming, especially for handling collections of data and text-based input/output.
