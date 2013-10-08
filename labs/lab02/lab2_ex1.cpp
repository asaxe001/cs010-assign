//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab02/lab2_ex1.cpp 
/// @brief Lab 2 excersise 1 for CS 10 Fall 2013
///
/// @author David Anderson [dande011@ucr.edu]
/// @date October 7, 2013
///
/// @par Enrollment Info
///     Lecture Section: 001
/// @par 
///     Lab Section: 028
/// @par 
///     TA: Mahmudal Hasan
///
/// @par Plagiarism Section
/// I hereby certify that the code in this file
/// is ENTIRELY my own original work.
//  ================== END ASSESSMENT HEADER ===============

#include <iostream>
using namespace std;


int main()
{
    int x,y,add,mul,div,mod;
    // Take input from the user
    cout << "Enter the first integer: ";
    cin >> x;
    cout << "\nEnter the second integer: ";
    cin >> y;
    cout << endl;
    
    
    //Math operations
    add = x + y;
    mul = x * y;
    div = x / y;
    mod = x % y;
    
    
    // Print out the results of the operations
    cout << x << " + " << y << " = " << add << endl;
    cout << x << " * " << y << " = " << mul << endl;
    cout << x << " / " << y << " = " << div << endl;
    cout << x << " % " << y << " = " << mod << endl;
    
    
    
    
    return 0;
}