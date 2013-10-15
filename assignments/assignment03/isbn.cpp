//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment03/isbn.cpp 
/// @brief Assignment 03 for CS 10 Fall 2013
///
/// @author David Anderson [dande011@ucr.edu]
/// @date October 15, 2013
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
#include <cmath>
using namespace std;

int main()
{
    string isbn;
    int checksum,x[9];
    cout << "Please enter the first 9 digits of the ISBN: ";
    cin >> isbn;
    cout << endl;

    // cout << "x0 " << isbn[0] << endl;
    // cout << "x1 " << isbn[1] << endl;
    // cout << "x2 " << isbn[2] << endl;

    checksum = isbn[0] + isbn[1]*2 + isbn[2]*3 + isbn[3]*4 + isbn[4]*5;
    checksum = checksum + isbn[5]*6 + isbn[6]*7 + isbn[7]*8 + isbn[8]*9;
    checksum = checksum % 10;
    
    cout << "Checksum: " << checksum;

    return 0;
}