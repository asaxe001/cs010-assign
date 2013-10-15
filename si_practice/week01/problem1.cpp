#include <iostream>
using namespace std;


int main()
{
    string name;
    // Output of prompt
    cout << "Hello, my name is Hal!\n"
        << "What is your name? ";
    cin >> name;
    cout << "Hello, " << name << ", you have a very nice name.\n";
    
    
    return 0;
}