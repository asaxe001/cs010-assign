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
#include <fstream>
#include <cstdlib>
using namespace std;

double numOne,numTwo,numThree;
int operationCase=0;

int error(int value)
{
    switch (value)
    {
        case 0:
        {//<divBy0>
            cout << "Cannot divide by zero." << endl;
            exit(1);
        }//</divBy0>
        break;
        case -1:
        {//<negative>
            cout << "Cannot take square root of a negative number."
                << endl;
            exit(1);
        }//</negative>
        break;
        case 1:
        {//<notSupported>
            cout << "Operation not supported" << endl;
            exit(1);
        }//</notSupported>
        break;
        default:
            return 1;

    }//</errorSwitch>


    return 1;
}//</error()>

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
    if(!(operationCase>=1 && operationCase<=8))
        error(1);
    
    
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

int main()
{
    string operation="0";
    double answer,answer2,discriminate;
    

    // // test the function w/out user input
    // operation="pythagorean";
    // numOne=-24;
    // numTwo=0;
    // numThree=5;

    // //</test>


    //Get the users chosen operation
    cout << "Please choose an operation: ";
    cin >>operation;
    cout << endl;
    op2int(operation);
    
    
    
    switch (operationCase)
    {
        case 1:
        {//<addition>
            input(2);
            answer = numOne + numTwo;
            cout << "Equation: " << numOne << " + " << numTwo << endl;
            cout << "Result: " << answer << endl;
        }//</addition>
        break;
        case 2:
        {//<subtraction>
            input(2);
            answer = numOne - numTwo;
            cout << "Equation: " << numOne << " - " << numTwo << endl;
            cout << "Result: " << answer << endl;
        }//</subtraction>
        break;
        case 3:
        {//<division>
            input(2);
            if(numTwo==0)
                error(0);
            answer = numOne / numTwo;
            cout << "Equation: " << numOne << " / " << numTwo << endl;
            cout << "Result: " << answer << endl;
        }//</division>
        break;
        case 4:
        {//<multiplication>
            input(2);
            answer = numOne * numTwo;
            cout << "Equation: " << numOne << " * " << numTwo << endl;
            cout << "Result: " << answer << endl;
        }//</multiplication>
        break;
        case 5:
        {//<fabs>
            input(1);
            answer = fabs(numOne);
            cout << "Equation: fabs(" << numOne << ")" << endl;
            cout << "Result: " << answer << endl;
        }//</fabs>
        break;
        case 6:
        {//<sqrt>
            input(1);
            if(numOne<0)
                error(-1);
            answer = sqrt(numOne);
            cout << "Equation: sqrt(" << numOne << ")" << endl;
            cout << "Result: " << answer;
        }//</sqrt>
        break;
        case 7:
        {//<quadratic>
            input(3);
            discriminate = (pow(numTwo,2) - (4*numOne * numThree));
            if(numOne==0)
                error(0);
            if(discriminate<0)
                error(-1);
            // answer = (-numTwo + sqrt(discriminate))/(2*numOne);
            // answer2 = (-numTwo - sqrt(discriminate))/(2*numOne);
            cout << "Equation: " << numOne << "x^2 + " << numTwo
                << "x + " << numThree << endl;
            cout << "Result: " << answer << ", " << answer2 << endl;
        }//</quadratic>
        break;
        case 8:
        {//<pythagorean>
            input(2);
            answer = sqrt(pow(numOne,2)+pow(numTwo,2));
            cout << "Equation: sqrt(" << numOne << "^2 + " << numTwo
                << "^2)" << endl;
            cout << "Result: " << answer << endl;
        }//</pythagorean>
        break;
        default:
        {
            
        }//</default>
        break;
        
    }//</switch(operation)>

    
    cin.get();
    return 0;
}//</main()>
