#include <iostream>
using namespace std;

int main ()
{
    double h,w,r,areaRec,areaCirc,grayedArea;
    //grayed area is the area left over after subtracting the area
    //of the circle from the area of the rectangle
    
    cout << "What is the width of the rectangle? ";
    cin >> w;
    cout << "What is the height of the rectangle? ";
    cin >> h;
    cout << "What is the radius of the circle contained within the rectangle? ";
    cin >> r;
    cout << endl;
    
    //calculate area of rectangle
    areaRec = w*h;
    //calculate area of circle
    areaCirc = 3.14159*r*r;
    //calculate the grayed area
    grayedArea = areaRec-areaCirc;
    
    //cout << areaRec << "  " << areaCirc << endl;
    
    cout << "The area of the rectangle outside of the circle is "
        << grayedArea << endl;
    
    
    
    return 0;
}