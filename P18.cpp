//Write a program in C++ to find the Area and Perimeter of a Rectangle.

#include <iostream>
using namespace std;

int areaOfRect(int l , int w){
    cout << "Area of Rectangle : ";
    return l * w;
}

int perimeterOfRect(int l , int w){
    cout << "Perimeter of Rectangle : ";
    return 2*(l + w);
}

int main()
{
    int length , width ;

    cout << "\nLength : "; cin >> length;
    cout << "\nWidth : "; cin >> width;

    cout << "\n";

    cout << areaOfRect(length , width) << endl;
    cout << perimeterOfRect(length , width) << endl;

    return 0;
}