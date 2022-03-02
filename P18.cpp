//Write a program in C++ to find the Area and Perimeter of a Rectangle.

#include <iostream>
using namespace std;

int areaOfRect(int l , int w){ // use proper  variable names as they are shown up in the   tooltip  for developer
    cout << "Area of Rectangle : "; // no output
    return l * w;
}

int perimeterOfRect(int l , int w){  // fullname of function
    cout << "Perimeter of Rectangle : "; // no output function
    return 2*(l + w);
}

int main()
{
    int length , width ; // always initialize

    cout << "\nLength : "; cin >> length;
    cout << "\nWidth : "; cin >> width;

    cout << "\n";

    cout << areaOfRect(length , width) << endl;
    cout << perimeterOfRect(length , width) << endl;

    return 0;
}