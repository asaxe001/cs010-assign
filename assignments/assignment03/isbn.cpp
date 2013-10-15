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
using namespace std;
int main()
{
    int isbn,checksum,weightedsum=0,x[9],count=9;
    cout << "Please enter the first 9 digits of the ISBN: ";
    cin >> isbn;
    cout << endl;
    x[1] = (isbn / 100000000) % 10;
    x[2] = (isbn / 10000000) % 10;
    x[3] = (isbn / 1000000) % 10;
    x[4] = (isbn / 100000) % 10;
    x[5] = (isbn / 10000) % 10;
    x[6] = (isbn / 1000) % 10;
    x[7] = (isbn / 100) % 10;
    x[8] = (isbn / 10) % 10;
    x[9] = (isbn / 1) % 10;
    while(count>0)
    {
        weightedsum = weightedsum + x[count]*count;
        --count;
    }
    checksum = weightedsum % 11;
    cout << "Checksum: " << checksum << endl;
    return 0;
}