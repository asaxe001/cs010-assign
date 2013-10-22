//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment04/mathematics.cpp 
/// @brief Assignment 04 for CS 10 Fall 2013
///
/// @author David Anderson [dande011@ucr.edu]
/// @date October 22, 2013
///
/// @par Enrollment Info
///     Lecture Section: 001
/// @par 
///     Lab Section: 028
/// @par 
///     TA: Mahmudul Hasan
///
/// @par Plagiarism Section
/// I hereby certify that the code in this file
/// is ENTIRELY my own original work.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <cmath>
using namespace std;

double numOne,numTwo,numThree;

int main()
{
	string operation;
	
	//Get the users chosen operation
	cout << "Please choose an operation: ";
	cin >>operation;
	cout << endl;
	
	
	
	switch(operation)
	{
		case "addition":
			{
				
			}
			break;
		case "subtraction":
			{
				
			}
			break;
		case "division":
			{
				
			}
			break;
		case "multiplication":
			{
				
			}
			break;
		case "fabs":
			{
				
			}
			break;
		case "sqrt":
			{
				
			}
			break;
		case "quadratic":
			{
				
			}
			break;
		case "pythagorean":
			{
				
			}
			break;
		default:
			{
				
			}
			break;
		
	}//</switch(operation)>

	
	
	return 0;
}

int input(int inputs);
{
	bool done=fase;
	
	while(!done)
	{
	switch (inputs)
	{
		case 1:
			{
				cout << "Enter your first number: "
				cin >> numOne;
				cout << endl;
				done=true;
			}
			break;
		 case 2:
		 	{
		 		
		 	}
		 	break;
		 case 3:
		 	{
		 		
		 	}
		 	break;
		 default:
		 	{
		 		cout << "Error in function input()" << endl;
		 		done=true;
		 	}
		 	break;
	}//</switch(inputs)>
	}//</while(done)>
	
	return 0;
}