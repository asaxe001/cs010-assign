#include <iostream>
using namespace std;

int main()
{
    int num;
    bool result;
    cout << "Enter a number: ";
    cin >> num;
    
    // result = num % 2 != 0;
    
    if(num % 2 != 0)
        cout << num << " is not even." << endl;
    else
        cout << num << " is even." << endl;
        
        
    // cout << result << endl;
    
    
    
    
    
    return 0;
}