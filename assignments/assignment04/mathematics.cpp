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
int operationCase=0;

int main()
{
	string operation;
	
	//Get the users chosen operation
	cout << "Please choose an operation: ";
	cin >>operation;
	cout << endl;
	op2int(operation);
	
	
	
	switch (operationCase)
	{
		case 1:
			{//<addition>
				
			}//</addition>
			break;
		case 2:
			{//<subtracion>
				
			}//</subtraction>
			break;
		case 3:
			{//<division>
				
			}//</division>
			break;
		case 4:
			{//<multiplication>
				
			}//</multiplication>
			break;
		case 5:
			{//<fabs>
				
			}//</fabs>
			break;
		case 6:
			{//<sqrt>
				
			}//</sqrt>
			break;
		case 7:
			{//<quadratic>
				
			}//</quadratic>
			break;
		case 8:
			{//<pythagorean>
				
			}//</pythagorean>
			break;
		default:
			{
				
			}//</default>
			break;
		
	}//</switch(operation)>

	
	
	return 0;
}//</main()>

int op2int(string operation)
{
	if(operation=="addition")
		operationCase=1;
	if(operation=="subtraction")
		operationCase=2;
	if(operation=="division")
		operationCase=3;
	if(operation=="multiplication")
		operationCase=4;
	if(operation=="fabs")
		operationCase=5;
	if(operation=="sqrt")
		operationCase=6;
	if(operation=="quadratic")
		operationCase=7;
	if(operation=="pythagorean")
		operationCase=8;
	if(operation==0)
	{
		cout << "Error in function op2int()" << endl;
		return 1;
	}
	
	
	return 0;
}

int input(int inputs)
{
	if(inputs==1||inputs==2||inputs==3)
	{
		cout << "Enter your first number: ";
		cin >> numOne;
		cout << endl;
	}
	if(inputs==2||inputs==3)
	{
		cout << "Enter your second number: ";
		cin >> numTwo;
		cout << endl;
	}
	if(inputs==3)
	{
		cout << "Enter your third number: ";
		cin >> numThree;
		cout << endl;
	}
	if(!(inputs==1||inputs==2||inputs==3))
	{
		cout << "Error in function input()" << endl;
		return 1;
	}
	
	
	return 0;
}//</input()>