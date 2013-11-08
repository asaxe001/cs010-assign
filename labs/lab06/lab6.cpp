//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab06/lab6.cpp 
/// @brief Lab 6 for CS 10 Fall 2013
///
/// @author David Anderson [dande011@ucr.edu]
/// @date October 31, 2013
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
#include <cstdlib>
#include <ctime>
using namespace std;

int excercise1();
int excercise2();
int excercise3();



int main()
{
    int excercise;
    cout << "Which exercise? ";
    cin >> excercise;
    cout << endl;

    //<test>

    // excercise = 2;

    //</tests>

    if(excercise==1)
        excercise1();
    else if (excercise==2)
        excercise2();
    else if (excercise==3)
        excercise3();

    return 0;
}


int excercise1()
{
    int begin=0, end=0;
    bool negative=false, firstrun=true;
    cout << "Enter beginning and ending numbers, separated by space: ";
    cin >> begin >> end;
    cout << endl;

    //<test>

    // begin = 0;
    // end = 13;

    //</test>
    firstrun=true;
    for(int i = begin; i <= end; ++i)
    {
        if (!firstrun)
            cout << ", ";
        cout << i;
        firstrun=false;
    }
    cout << endl << endl;

    cout << "Enter beginning and ending numbers, separated by space: ";
    cin >> begin >> end;
    cout << endl;
    firstrun=true;
    for(int i = begin; i <= end; i += 2)
    {
        if (!firstrun)
            cout << ", ";
        cout << i;
        firstrun=false;
    }
    cout << endl << endl;

    cout << "Enter the beginning and largest positive numbers, "
        << "separated by space: ";
    cin >> begin >> end;
    cout << endl;
    firstrun=true;
    for(int i = begin; i <= end; i *= -2)
    {
        if(!firstrun)
            cout << ", ";
        cout << i;
        firstrun=false;
    }
    cout << endl;


    return 0;
}


int excercise2()
{
    int grade = 0;
    int grades [5] =
    {
        0,0,0,0,0
    };

    cout << "Enter one or more grades, or -1 to stop: ";

    while(grade!=-1)
    {
        cin >> grade;
        if (grade >= 90)
            grades[0]++;
        else if (grade >= 80)
            grades[1]++;
        else if (grade >= 70)
            grades[2]++;
        else if (grade >= 60)
            grades[3]++;
        else if (grade <=59 && grade >=0)
            grades[4]++;
    }
    cout << endl;

    cout << "The grades breakdown is:" << endl;
    cout << "As: " << grades[0] << endl;
    cout << "Bs: " << grades[1] << endl;
    cout << "Cs: " << grades[2] << endl;
    cout << "Ds: " << grades[3] << endl;
    cout << "Fs: " << grades[4] << endl;

    return 0;
}


int excercise3()
{
    string toss="yes";
    bool coin;

    srand(time(0));

    cout << "Toss the coin? ";
    cin >> toss;
    cout << endl;
    while (toss=="yes")
    {

        coin = rand() % 2;
        if (coin)
            cout << "tails";
        else if (!coin)
            cout << "heads";
        cout << endl;
        cout << "Toss the coin? ";
        cin >> toss;
        cout << endl;
    }
    return 0;
}