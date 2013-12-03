//  =============== BEGIN ASSESSMENT HEADER ================
/// @file extra/overlap.cpp 
/// @brief Extra Assignment for CS 10 Fall 2013
///
/// @author David Anderson [dande011@ucr.edu]
/// @date 12-02-2013
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
#include <vector>

using namespace std;

bool test(vector<int>);

int main()
{
	vector <string> key(3);

	for(int i=0; i < 3; i++)
	{
		cout << "Key: ";
		cin >> key[i];
	}

	test(key);



	return 0;
}

bool test(vector<int> key)
{
	
}