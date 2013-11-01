//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment06/pig.cpp 
/// @brief Assignment 06 for CS 10 Fall 2013
///
/// @author David Anderson [dande011@ucr.edu]
/// @date 10-31-2013
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
using namespace std;

int main()
{
    unsigned int n, numSims, sum=0;
    int roll=1;
    double count[7] =
    {
        0,0,0,0,0,0,0
    };
    double score[7] =
    {
        0,0,0,0,0,0,0
    };

    //<test>

    n = 20;
    numSims = 1000;

    //</test>

    cout << "What value should we hold at? ";
    cin >> n;
    cout << endl;

    cout << "Hold-at-N turn simulations? ";
    cin >> numSims;
    cout << endl;

    srand(time(0));
    for(int x=0; x<numSims; ++x)
    {
        // cout << endl << " forloop";/////////////////////////////////
        roll=0;
        sum=0;
        while(roll != 1 && (sum<n))
        {
            roll = rand()%6+1;
            // cout <<" roll:"<< roll;////////////////////////////////
            if(roll==1)
                sum=0;
            else
                sum+=roll;
            // cout<<" sum:"<<sum; ///////////////////////////////////
        }

        if(sum==0)
            ++count[0];
        else
        {
            for(int v=0; v<=6; ++v)
            {
                if(sum==(n+v))
                {
                    // cout << endl << " v:" << v+1 << ':' << n+v;////////
                    ++count[v+1];
                }
            }
        }
    }
    // cout << endl; ////////////////////////////////////////////////






    for(int z=0; z<=6; ++z)
    {
        score[z] = count[z]/static_cast<double>(numSims);
    }

    // cout << endl;
    cout << "Score\tEstimated Probability" << endl;
    cout << fixed;
    cout << setprecision(6);
    cout << "0\t" << score[0] << endl;
    for(int y=0; y<6; ++y)
    {
        cout << n+y << '\t' << score[1+y] << endl;
    }

    return 0;
}