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
// #include "textadventure_picture.h"
using namespace std;

void monsterRoom(int&, int&, string);
void genieRoom(int&, int&);
void pictureRoom(); //drawPicture();
void drawPicture();

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
    srand(500);
    int bananas=5, oranges=3;
    string name, monster;

    cout << "What is your name? ";
    cin >> name;
    cout << endl;

    cout << "What is the scariest monster you can think of? ";
    cin >> monster;
    cout << endl;



    return 0;
}

/// @brief Reduces inventory to 0, and cout attacked
/// @param bananas the number of bananas in inventory
/// @param oranges the number of oranges in inventory
/// @param monster the monster that attacked the player
/// @return nothing
void monsterRoom(int& bananas, int& oranges, string monster)
{
    bananas = inventory(bananas, 0, 0);
    oranges = inventory(oranges, 0, 0);
    cout "Watch out!!" << endl;
    cout << monster << " attacks you and steals all of your bananas and oranges." << endl;
}

/// @brief Increases inventory items by specified amount
/// @param bananas the number of bananas in inventory
/// @param oranges the number of oranges in inventory
/// @return nothing
void genieRoom(int& bananas, int& oranges)
{
    bananas = inventory(bananas, 2);
    oranges = inventory(oranges, 1);
}

/// @brief Calls the drawPicture() function
/// @return Nothing
void pictureRoom()
{
    drawPicture();
}

/// @brief Draws a picture
/// @return Nothing
void drawPicture()
{
    cout << "        _--~~--_" << endl;
    cout << "      /~/_|  |_\\~\\" << endl;
    cout << "     |____________|" << endl;
    cout << "     |[][][][][][]|" << endl;
    cout << "   __| __         |__" << endl;
    cout << "  |  ||. |   ==   |  |" << endl;
    cout << " (|  ||__|   ==   |  |)" << endl;
    cout << "  |  |[] []  ==   |  |" << endl;
    cout << "  |  |____________|  |" << endl;
    cout << "  /__\\            /__\\" << endl;
    cout << "   ~~              ~~ " << endl;
    cout << endl;
    return;
}
