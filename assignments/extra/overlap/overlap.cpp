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

bool test(vector<string>, &string);

int main()
{
	vector <string> key(3);
	bool match;
	string largestMatchStr;
	int largestMatchInt;

	for(int i=0; i < 3; i++)
	{
		cout << "Key: ";
		cin >> key[i];
	}
	
	match = test(key, largestMatchStr);


	return 0;
}

bool test(vector<string> key, &string largestMatchStr)
{
	string input;
	int length=0;
	cout << "Input: ";
	while(cin >> input)
	{
		for(int i = 0; i < 3; i++)
		{
			// for(int x = 0; x < input.size(); x++)
			{
				// cout << "input.find(key[" << i << "]): " << input.find(key[i]) << endl;
				while(true)
					if(input.find(key[i].substr(length)) != string::npos)
						length++;
					cout << "length: " << length << endl;
			}
		}
		cout << endl << "Input: ";
	}
}