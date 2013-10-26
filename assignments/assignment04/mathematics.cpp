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


int error(int value)
{
    cout << "Error: ";
    switch (value)
    {
        case 0:
        {//<divBy0>
            cout << "Cannot divide by zero." << endl;
            return 1;
        }//</divBy0>
        break;
        case -1:
        {//<negative>
            cout << "Cannot take square root of a negative number."
                << endl;
            return 1;
        }//</negative>
        break;
        case 1:
        {//<notSupported>
            cout << "Operation not supported." << endl;
            return 1;
        }//</notSupported>
        break;
        default:
            return 1;

    }//</errorSwitch>


    return 1;
}//</error()>

int op2int(string operation)
{
    int operationCase=0;
    if(operation=="addition")
        operationCase=1;
    else if(operation=="subtraction")
        operationCase=2;
    else if(operation=="division")
        operationCase=3;
    else if(operation=="multiplication")
        operationCase=4;
    else if(operation=="fabs")
        operationCase=5;
    else if(operation=="sqrt")
        operationCase=6;
    else if(operation=="quadratic")
        operationCase=7;
    else if(operation=="pythagorean")
        operationCase=8;
    else
        error(1);
    
    
    return operationCase;
}

double input(int inputs)
{
    float numOne=0.0,numTwo=0.0,numThree=0.0;

    if(inputs==1)
    {
        cout << "Enter your first number: ";
        cin >> numOne;
        cout << endl;
        return numOne;
    }
    else if(inputs==2)
    {
        cout << "Enter your second number: ";
        cin >> numTwo;
        cout << endl;
        return numTwo;
    }
    else if(inputs==3)
    {
        cout << "Enter your third number: ";
        cin >> numThree;
        cout << endl;
        return numThree;
    }
    else if(!(inputs==1||inputs==2||inputs==3))
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
    float numOne,numTwo,numThree;

    

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
    
    
    
    switch (op2int(operation))
    {
        case 1:
        {//<addition>
            numOne = input(1);
            numTwo = input(2);
            answer = numOne + numTwo;
            cout << "Equation: " << numOne << " + " << numTwo << endl;
            cout << "Result: " << answer << endl;
        }//</addition>
        break;
        case 2:
        {//<subtraction>
            numOne = input(1);
            numTwo = input(2);
            answer = numOne - numTwo;
            cout << "Equation: " << numOne << " - " << numTwo << endl;
            cout << "Result: " << answer << endl;
        }//</subtraction>
        break;
        case 3:
        {//<division>
            numOne = input(1);
            numTwo = input(2);
            cout << "Equation: " << numOne << " / " << numTwo << endl;
            if(numTwo==0)
            {
                error(0);
            }
            else
            {
                answer = numOne / numTwo;
                cout << "Result: " << answer << endl;
            }
        }//</division>
        break;
        case 4:
        {//<multiplication>
            numOne = input(1);
            numTwo = input(2);
            answer = numOne * numTwo;
            cout << "Equation: " << numOne << " * " << numTwo << endl;
            cout << "Result: " << answer << endl;
        }//</multiplication>
        break;
        case 5:
        {//<fabs>
            numOne = input(1);
            answer = fabs(numOne);
            cout << "Equation: fabs(" << numOne << ")" << endl;
            cout << "Result: " << answer << endl;
        }//</fabs>
        break;
        case 6:
        {//<sqrt>
            numOne = input(1);
            cout << "Equation: sqrt(" << numOne << ")" << endl;
            if(numOne<0)
            {
                error(-1);
            }
            else
            {
                answer = sqrt(numOne);
                cout << "Result: " << answer << endl;
            }
        }//</sqrt>
        break;
        case 7:
        {//<quadratic>
            numOne = input(1);
            numTwo = input(2);
            numThree = input(3);
            discriminate = (pow(numTwo,2) - (4*numOne * numThree));
            cout << "Equation: " << numOne << "x^2 + " << numTwo
                << "x + " << numThree << " = 0" << endl;
            if(numOne==0)
            {
                error(0);
            }
            else if(discriminate<0)
            {
                error(-1);
            }
            else
            {
                answer = (-numTwo + sqrt(discriminate))/(2*numOne);
                answer2 = (-numTwo - sqrt(discriminate))/(2*numOne);
                if (answer2==0&&answer==0)
                    cout << "Result: 0" << endl;
                else
                    cout << "Result: " << answer2 << ", " << answer << endl;
            }
        }//</quadratic>
        break;
        case 8:
        {//<pythagorean>
            numOne = input(1);
            numTwo = input(2);
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
