// Lesson 1: Hello, World!
// Let's start with the classic 'Hello World' C++ program

#include <iostream>
// This line includes the iostream library, which allows the program to input and output data. 
// The angle brackets (< >) indicate that the library is a system library and is located in the 
// standard library directory.

// This is a function
// The main() function acts as an entry point into the file
int main(int argc, char* argv[]) { // The int before the main() function indicates that the function returns an integer value
    //   ^ int argc is the number of command line arguments passed to the file
    //   ^ argv[] contains the command line flags
    std::cout << "Hello, World!\n"; // The std::cout is in the format of namespace::object
    // << is used to send the string to the console
    // \n is a way of adding a new line to the end of the string
    return 1; // Return 0 to indicate the program executed succesfully
};  // Any method or class should be closed using the }; characters

// To compile the above program:
// 0. Make sure you have a C++ compiler installed
//    Usually it is called gcc or g++ or clang or clang++
// 1. Change directory to where the file
//    cd <path to wd>
//    For the system used by the author:
//    $ clang++ filename.cpp
// 2. The filename in this case is lesson1.cpp
//    Therfore this can be compiled using
//    $ clang++ lesson1.cpp
// 3. This will create a binary called a.out in your current directory which can be run on your device natively
//    Call it using:
//    $ ./a.out
//    This should print "Hello, World!" to the console
// 4. A better way to do this is to specify where the output file will be created and in which directory
//    $ mkdir ./output
//    $ clang++ -o ./output/lesson1 lesson1.cpp
//    This will create the binary lesson1 in ./output/
// 5. Run the new binary using
//    $ ./output/lesson1
//    This should print "Hello, World!" to the console