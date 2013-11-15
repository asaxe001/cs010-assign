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
void monsterRoom(int&, int&, string);
void genieRoom(int&, int&);
// void pictureRoom();

/// @brief Updates the inventory
/// @param item the item in the inventory to update
/// @param add the ammount to item (positive or negative)
/// @param set the value to item if value passed in
/// @return new value of item
int inventory(int item, int add, int set=42)
{
    item += add;
    if(set != 42)
    {
        item = set;
    }
    return item;
}

int main()
{

    return 0;
}