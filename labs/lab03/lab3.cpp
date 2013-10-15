//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab03/lab3.cpp 
/// @brief Lab 3 for CS 10 Fall 2013
///
/// @author David Anderson [dande011@ucr.edu]
/// @date October 15, 2013
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
#include <cmath>
using namespace std;

int main()
{
   int ex;
   int dollars,quarters,dimes,nickels,pennies,cents;
   double purchase,received,change;
   char character;
   cout << "Which exercise? ";
   cin >> ex;
   cout << endl;
   if ( ex == 1 )
   {
      // All Exercise 1 code
      cout << "Enter purchase amount: ";
      cin >> purchase;
      cout << endl;

      cout << "Enter amount received: ";
      cin >> received;
      cout << endl;

      change = received - purchase;
      cents = (change*100)+.5;
      cents = cents % 100;

      cout << "Total Change: $" << change << endl << endl;
      // cout << "cents: " << cents << endl << endl;

      dollars = static_cast<int>(change);
      quarters = cents / 25;
      dimes = (cents-quarters*25) / 10;
      nickels = (cents-quarters*25-dimes*10) / 5;
      pennies = (cents-quarters*25-dimes*10-nickels*5);

      cout << "dollars " << dollars << endl;
      cout << "quarters " << quarters << endl;
      cout << "dimes " << dimes << endl;
      cout << "nickels " << nickels << endl;
      cout << "pennies " << pennies << endl;


   }
   else if ( ex == 2 )
   {
      // All Exercise 2 code 
      cout << "Enter a character: ";
      cin >> character;
      cout << endl;
      cout << character << " is letter " << (static_cast<int>(character)-96)
         << endl;
   }
  
   return 0;
}