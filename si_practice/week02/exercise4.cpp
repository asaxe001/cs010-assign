#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b;
    int x,y,rem,tens;
    char out;
    
    cout << "Enter an integer, a: ";
    cin >> a;
    cout << "Enter an integer, b: ";
    cin >> b;
    cout << endl;
    
    x = a / b;
    y = b * x;
    rem = a - y;
    
    
    cout << "The remainder of a/b is: " << rem << "." << endl;
    
    
    
    
    
    
    
    return 0;
}