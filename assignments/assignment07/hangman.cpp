//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment07/hangman.cpp 
/// @brief Assignment 07 for CS 10 Fall 2013
///
/// @author David Anderson [dande011@ucr.edu]
/// @date 11-07-2013
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
#include "assn.h"

string setupUnsolved(string);
string updateUnsolved(string, string, char);
char getGuess(string);
void output(string, int, string);
void renderHangMan(int);

int main()
{
    string phrase, unsolved, unsolvedPrev, prevGuesses;
    char guess;
    int guesses = 7;
    bool done=false;

    cout << "Enter phrase:";
    cin >> phrase;
    cout << endl;
    unsolved = setupUnsolved(phrase);
    clearScreen();
    output(unsolved, guesses, prevGuesses);

    while(!done && guesses > 0)
    {
        // clearScreen();
        cout << endl << endl;
        // output(unsolved, guesses, prevGuesses);

        unsolvedPrev = unsolved;

        // cout << "Enter a guess: ";
        guess = getGuess(prevGuesses);
        cout << endl;
        clearScreen();
        prevGuesses += guess;
        unsolved = updateUnsolved(phrase, unsolved, guess);

        if(unsolvedPrev == unsolved)
        {
            --guesses;
            // unsolved
        }


        output(unsolved, guesses, prevGuesses);
        renderHangMan(guesses);
        done = (phrase == unsolved);
        // done = true;
    }
    if(unsolved==phrase)
        cout << "Congratulations!!";
    else
        cout << "You Lost!";
    return 0;
}

/// @brief Puts dashes in place of alphabetic characters in the phrase.
/// @param phrase the phrase to be solved
/// @return the phrase with all alphabetic characters converted to dashes
string setupUnsolved(string phrase)
{
    // cout << "phrase.size(): " << phrase.size() << endl;
    // string hyphens(phrase.size(), '-');
    string hyphens = phrase;
    for(int i = 0; i < static_cast<int>(phrase.size()); ++i)
    {
        // cout << "isalpha(phrase.at(i): " << isalpha(phrase.at(i)) << endl;
        if(isalpha(phrase[i]))
            hyphens.at(i) = '-';
        else
            hyphens.at(i) = phrase.at(i);

    }
    return hyphens;
}

/// @brief Replaces the dashes with the guessed character.
/// @param phrase the phrase to be solved
/// @param unsolved the phrase with dashes for all unsolved characters
/// @param guess the char containing the current guessed character
/// @return the new unsolved string with dashes replaced by new guess
string updateUnsolved(string phrase, string unsolved, char guess)
{    
    for(int i = 0; i <= static_cast<int>(phrase.length()); ++i)
    {
        string unsolvedInit = unsolved;
        if(guess == phrase[i])
        {
            unsolved[i] = phrase[i];
        }
    }
    return unsolved;
    // return "0";
}

/// @brief Gets valid guess as input. 
///
///    A guess is taken as input as a character. It is valid if 
///    1) it is an alphabetic character; and
///    2) the character has not already been guessed
///
/// @param prevGuesses the string containing all characters guessed so far
/// @return a valid guess and only a valid guess as a character
char getGuess(string prevGuesses)
{
    char guess;
    cout << "Enter a guess: ";
    cin >> guess;
    cout << endl;
    while(!isalpha(guess) || ~prevGuesses.find(guess))
    {
        cout << endl << "Invalid guess! Please re-enter a guess: ";
        cin >> guess;
    }
    cout << endl;
    return guess;
}

void output(string unsolved, int guesses, string prevGuesses)
{
    cout << "Phrase: " << unsolved << endl << endl << endl;
    if(prevGuesses.size()==0);
    else
    {
        cout << "Guessed so far: " << prevGuesses << endl;
        cout << "Wrong guesses left: " << guesses << endl << endl << endl;
    }

    return;
}

void renderHangMan(int guesses)
{

    return;
}