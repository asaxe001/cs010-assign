#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1,x2,y1,y2,dist;
    
    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter y1: ";
    cin >> y1;
    cout << endl;
    
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter y2: ";
    cin >> y2;
    cout << endl;
    
    dist = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    
    cout << "The distance between the two points is " << dist << "." << endl;
    
    
    
    return 0;
}