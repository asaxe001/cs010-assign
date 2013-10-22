//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab04/lab4.cpp 
/// @brief Lab 3 for CS 10 Fall 2013
///
/// @author David Anderson [dande011@ucr.edu]
/// @date October 22, 2013
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
    int exnum;
    char letNum;
    bool isLoLet, isUpLet, isNum;

    cout << "Which exercise? ";
    cin >> exnum;

    if (exnum==1)
    {
 
        // All Exercise 1 code which is normally in main
        cout << "\nEnter a character: ";
        cin >> letNum;
        cout << endl;
        isNum=(letNum>='0' && letNum<='9');
        isUpLet=(letNum>=65 && letNum<=90);
        isLoLet=(letNum>=97 && letNum<=122);
        if(isNum)
        {
            cout << "You entered a numeric digit." << endl;
        }
        else if(isUpLet)
        {
            cout << "You entered an uppercase letter." << endl;
        }
        else if(isLoLet)
        {
            cout << "You entered a lowercase letter." << endl;
        }
        else
            cout << "You entered an unknown character type." << endl;
    }
    
    
    else if (exnum==2)
    {
        char input;
        // All Exercise 2 code which is normally in main
        cout << "\nWhat do you want to do tonight?" << endl
            << "a. Go to the movies" << endl
            << "b. Eat out" << endl
            << "c. Hang out at the Mall" << endl
            << "d. Go watch the Dodgers" << endl;
        cin >> input;
        cout << endl;

        if(input=='a'||input=='A')
        {
            cout << "I know just the movie to see!" << endl;
        }
        else if(input=='b'||input=='B')
        {
            cout << "Great! I've been wanting to try that new "
                << "Tuvaluan restaurant!" << endl;
        }
        else if(input=='c'||input=='C')
        {
            cout << "You bring the cash!" << endl;
        }
        else if(input=='d'||input=='D')
        {
            cout << "Take me out to the ball game ..." << endl;
        }
        else
        {
            cout << "Nothing suits you, then? "
                << "I guess we'll just stay and program!" << endl;
        }
    }

 

    return 0;
}