//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab02/lab2_ex2.cpp 
/// @brief Lab 2 Excercise 3 for CS 10 Fall 2013
///
/// @author David Anderson [dande011@ucr.edu]
/// @date October 8, 2013
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
    double age,lowHeart,highHeart;
    cout << "What is your age? ";
    cin >> age;
    lowHeart = 0.60 * (220-age);
    highHeart = 0.75 * (220-age);
    cout << "\nYour target heart rate is between " << lowHeart << " and "
       << highHeart << " bpm.";



    return 0;
}