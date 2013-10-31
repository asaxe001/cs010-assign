//  =============== BEGIN ASSESSMENT HEADER ================
/// @file assignment<05/cipher.cpp 
/// @brief Assignment/Lab 05 for CS 10 Fall 2013
///
/// @author David Anderson [dande011@ucr.edu]
/// @date 10-25-2013
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
using namespace std;

int main()
{
    string method, map;
    cout << "What is the method? (encryption or decryption)? ";
    cin >> method;

    if ((method=="encryption") || (method=="decryption"));
    {
        cout << "Correct choice" << endl;
    }
    else
    {
    	cout << "Error: invalid method choice" << endl;
    }


    cout << "What is the translation map (type 'default' to ues default): ";
    cin >> map;

    if (map.size() != 26)
    {
        cout << "Error: invalid translation map size." << endl;
        return 1;
    }





    return 0;
}