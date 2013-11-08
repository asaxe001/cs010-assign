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
    string phrase, unsolved, prevGuesses;
    char guess;
    int guesses = 7;
    bool done=false;

    cout << "Enter phrase:";
    cin >> phrase;
    clearScreen();
    unsolved = setupUnsolved(phrase);

    while(!done && guesses > 0)
    {
        output(unsolved, guesses, prevGuesses);

        guess = getGuess(prevGuesses);
        prevGuesses += guess;
        --guesses;

        renderHangMan(guesses);
        done = (phrase == unsolved);
        // done = true;
    }

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
    for(int i = 0; i < phrase.size(); ++i)
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
    return "0";
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
    cout << "Guess phrase: ";
    cin >> guess;
    cout << endl;
    for(int i = 0; i < prevGuesses[i]; ++i)
    {
        if(guess == prevGuesses[i])
        {
            cout << "Already Guessed" << endl;
            return 0;
        }
    }
    return guess;
}

void output(string unsolved, int guesses, string prevGuesses)
{
    cout << "Phrase: " << unsolved << endl;
    cout << "Number of guesses left: " << guesses << endl;
    cout << "Previous guesses: " << prevGuesses << endl;
    return;
}

void renderHangMan(int guesses)
{

    return;
}