//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab05/lab5.cpp 
/// @brief Lab 5 for CS 10 Fall 2013
///
/// @author David Anderson [dande011@ucr.edu]
/// @date October 29, 2013
///
/// @par Enrollment Info
/// Lecture Section: 001
/// @par 
/// Lab Section: 028
/// @par 
/// TA: Mahmudal Hasan
///
/// @par Plagiarism Section
/// I hereby certify that the code in this file
/// is ENTIRELY my own original work.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
using namespace std;

int main()
{
    int exercise,size;
    string word;
    bool eExist=false, xExist=false, error=false;

    cout << "Which exercise? ";
    cin >> exercise;
    cout << endl;

    if(exercise==1)
    {
        cout << "Enter a word: ";
        cin >> word;
        cout << endl;
        // cout << "wordsize(): " << word.size() << endl;
        size = word.size();

        for(int i=0; i < size; ++i)
        {
            // cout << word.at(i) << ' ';
            if (word.at(i)=='e')
                eExist = true;
            if (word.at(i)=='x')
                xExist = true;
        }
        // cout << endl << eExist << ' ' << xExist << endl;
        if(xExist)
        {
            cout << "Your word, " << word << ", contains the character \'x\'"
                << endl;
        }
        if(eExist)
        {
            cout << "Your word, " << word << ", contains the character \'e\'"
                << endl;
        }
    }
    else if(exercise==2)
    {
        cout << "Enter a word: ";
        cin >> word;
        cout << endl;
        size = word.size();

        for(int i=0; i< size; ++i)
        {
            if (word.at(i)=='e')
                word.at(i) = '3';
            if (word.at(i)=='i')
                word.at(i) = '1';
            if (word.at(i)=='x')
                word.at(i) = '*';
        }
        cout << "Your word transformed is " << word << endl;
    }
    else if(exercise==3)
    {
        cout << "Enter a sentence: ";
        cin >> word;
        cout << endl;
        if(word.find('.')==string::npos)
        {
            cout << "Your sentence does not contain the character '.'" << endl;
        }
        else if(word.find('.')!=string::npos)
        {
            cout << "The character \'.\' is located at index "
                << word.find('.') << endl;
        }
        if(word.find("stop")==string::npos)
        {
            cout << "Your sentence does not contain the word \"stop\"" << endl;
        }
        else if(word.find("stop")!=string::npos)
        {
            cout << "The word \"stop\" starts at index "
                << word.find("stop") << endl;
        }
    }



    return 0;
}//npos