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
void endRoom(int, int);
void randomize(char&, char&, char&, char&);
void userInput(char&);
void setup(string&, string&);

/// @brief Updates the inventory
/// @param item the item in the inventory to update
/// @param add the ammount to item (positive or negative)
/// @param set the value to item if value passed in
/// @return nothing
void inventory(int& item, int add, int set=42)
{
    item += add;
    if(set != 42)
    {
        item = set;
    }
}

/// @brief Prints the player status to the console;
/// @param name the name of the player
/// @param bananas the number of bananas
/// @param oranges the number of oranges
/// @return nothing
void status(string name, int bananas, int oranges)
{
    cout << name << ", you are in a room with 4 doors." << endl;
    cout << "You are carrying " << bananas << " bananas and " << oranges 
        << " oranges." << endl << endl << endl;
}

int main()
{
    srand(time(0));
    int bananas=5, oranges=3;
    string name, scaryMonster;
    char input;
    char monster, genie, picture, end;

    setup(name, scaryMonster);

   
    startL:
    randomize(monster, genie, picture, end);

    input=0;

    status(name, bananas, oranges);
    userInput(input);

    if(input==monster)
        monsterRoom(bananas, oranges, scaryMonster);
    else if(input==genie)
        genieRoom(bananas, oranges);
    else if(input==picture)
        pictureRoom();
    else if(input==end)
    {
        endRoom(bananas, oranges);
        return 0;
    }





    goto startL;






    return 0;
}

/// @brief gets the initial input for setup of the game
/// @param name the name of the player
/// @param monster the scariest monster
/// @return nothing
void setup(string& name, string& monster)
{
    cout << "Please enter your name: ";
    cin >> name;
    cout << endl << endl << endl;

    cout << "Name your scariest monster: ";
    cin >> monster;
    cout << endl << endl << endl;
}

/// @brief gets the user input
/// @param input the char input of the user
/// @return nothing
void userInput(char& input)
{
    while(!(input=='N' || input=='S' || input=='E' || input=='W'))
    {
        cout << "Pick a door to enter by typing "
            << "the direction it is in (N/E/S/W): ";
        cin >> input;
        cout << endl << endl << endl;
    }

}

/// @brief Final output of the game at the end
/// @param bananas the number of bananas
/// @param oranges the number of oranges
/// @return nothing
void endRoom(int bananas, int oranges)
{
    cout << "You found the exit!" << endl;
    cout << "Your score is " << bananas + oranges << " ("
        << bananas << " bananas and " << oranges << " oranges)." << endl;
    cout << "Bye bye!!!" << endl;
}

/// @brief Sets the values of the rooms to one of the two sets
/// @return nothing
void randomize(char& monster, char& genie, char& picture, char& end)
{
    switch(rand() % 2)
    {
        case 0:
            monster = 'N';
        genie   = 'S';
        picture = 'E';
        end     = 'W';
        break;
        case 1:
            end     = 'N';
        monster = 'S';
        genie   = 'E';
        picture = 'W';
        break;
    }

}

/// @brief Reduces inventory to 0, and cout attacked
/// @param bananas the number of bananas in inventory
/// @param oranges the number of oranges in inventory
/// @param monster the monster that attacked the player
/// @return nothing
void monsterRoom(int& bananas, int& oranges, string monster)
{
    inventory(bananas, 0, 0);
    inventory(oranges, 0, 0);
    cout << "Watch out!!" << endl;
    cout << monster
        << " attacks you and steals all of your bananas and oranges."
        << endl << endl << endl;
}

/// @brief Increases inventory items by specified amount
/// @param bananas the number of bananas in inventory
/// @param oranges the number of oranges in inventory
/// @return nothing
void genieRoom(int& bananas, int& oranges)
{
    cout << "!!POOF!!" << endl;
    cout << "A genie pops out and grants you 2 bananas and 1 orange."
        << endl << endl << endl;
    inventory(bananas, 2);
    inventory(oranges, 1);
}

/// @brief Calls the drawPicture() function
/// @return Nothing
void pictureRoom()
{
    cout << "You found a picture!" << endl;
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
// comment for comments sake