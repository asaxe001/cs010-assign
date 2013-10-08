//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment01/hello.cpp 
/// @brief Assignment 01 for CS 10 Fall 2013
///
/// @author David Anderson [dande011@ucr.edu]
/// @date October 4, 2013
///
/// @par Enrollment Info
///     Lecture Section: 001
/// @par 
///     Lab Section: 028
/// @par 
///     TA: Mahmudul Hasan
///
/// @par Plagiarism Section
/// I hereby certify that the code in this file
/// is ENTIRELY my own original work.
//  ================== END ASSESSMENT HEADER ===============

#include <iostream>
using namespace std;

int main() {
    // Creates the variable to hold a person's name.
    string name;
    
    // Prompt to ask for the user's name
    cout << "Hello, What is your name?\n";
    
    // Sets the input from the person as their name.
    cin >> name;
    
    // Reads back a sentence containing the name variable.
    cout << endl << "Hi, " << name << ", I bid you good day.\n";
    
    return 0;
    
}