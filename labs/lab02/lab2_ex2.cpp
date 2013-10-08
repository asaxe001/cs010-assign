//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab02/lab2_ex2.cpp 
/// @brief Lab 2 Excercise 2 for CS 10 Fall 2013
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
// Declare the variables for the input


int main()
{
    double x,y,z,a,b,c,sum,avg;
    // Take user input
    cout << "Enter six fp numbers on a single line, separated by spaces: ";
    cin >> x >> y >> z >> a >> b >> c;
    
    // Perform mathematical operations
    sum = x + y + z + a + b + c;
    avg = sum/6;
    
    // Display results
    cout << "\nSum of " << x << " + " << y << " + " << z << " + " << a 
        << " + " << b << " + " << c << " = " << sum << endl;
    cout << "Average = " << avg << endl;
    
    
    
    
    
    return 0;
}