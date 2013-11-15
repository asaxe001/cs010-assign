//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment08/textadventure.cpp 
/// @brief Assignment 08 for CS 10 Fall 2013
///
/// @author David Anderson [dande011@ucr.edu]
/// @date 11-14-2013
///
/// @par Enrollment Notes 
///     Lecture Section: 001
/// @par
///     Lab Section: 028
/// @par
///     TA: Mahmudul Hasan
///
/// @par Plagiarism Section
/// I hereby certify that the code in this file
/// is ENTIRELY my own original work.
//  =============== END ASSESSMENT HEADER ==================
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <cctype>
#include "textadventure_picture.h"

int bananas, oranges;

int inventory(string item, int add, int set=42)
{
    if(item=="bananas")
        bananas += add;
    if(item=="oranges")
        oranges += add;
    if(set != 42)
    {
        if(item=="bananas")
            bananas = set;
        if(item=="oranges")
            oranges = set;
    }
    return 0;
}