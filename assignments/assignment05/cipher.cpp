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
    string method, map, word, indexer1, indexer2;
    const string alpha = "abcdefghijklmnopqrstuvwxyz";
    int wordSize;
    bool valid;

    //<test>

    // method = "encryption";
    // method = "decryption";
    // map = "default";
    // word = "abc";
    // word = "zyx";
    // word = "ABC";

    //</test>


    cout << "What is the method? (encryption or decryption)? ";
    cin >> method;
    cout << endl;

    if (method != "encryption" && method != "decryption")
    {
        cout << "Error: invalid method choice." << endl;
        return 0;
    }


    cout << "What is the translation map (type 'default' to ues default): ";
    cin >> map;
    cout << endl;

    if(map=="default")
        map = "zyxwvutsrqponmlkjihgfedcba";
    else if (map.size() != 26)
    {
        cout << "Error: invalid translation map size." << endl;
        return 0;
    }


    cout << "What is the single word to translate: ";
    cin >> word;
    cout << endl;
    wordSize = word.size();

    for(int x = 0; x < wordSize; ++x)
    {
        if(method=="encryption"&&(word.at(x)>=97&&word.at(x)<=122));
        else if(map.find(word.at(x))==string::npos)
        {
            cout << "Error: " << method << " cannot be performed.";
            return 0;
        } 
    }
    // cout << valid << endl;

    if(method=="encryption")
    {
        indexer2 = alpha;
        indexer1 = map;
        cout << "Encrypted word: ";
    }
    else if(method=="decryption")
    {
        indexer2 = map;
        indexer1 = alpha;
        cout << "Decrypted word: ";
    }

    for(int y = 0; y < wordSize; ++y)
    {
        word.at(y) = indexer1.at(indexer2.find(word.at(y)));
    }

    cout << word << endl;

    return 0;
}