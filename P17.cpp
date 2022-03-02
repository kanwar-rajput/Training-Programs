// Write a program in C++ to calculate the volume of a cylinder.

#include <iostream>
using namespace std;

const float PI = 3.14;

float volumeOfCylinder(int radius,int height){
    cout << "The volume of Cylinder is : "; // no output statement
    return (PI*radius*radius*height);
}

int main()
{
    int radius,height; // always initialize

    cout << "\nRadius of Cylinder : "; cin >> radius;
    cout << "\nHeight of Cylinder : "; cin >> height;
    cout << volumeOfCylinder(radius,height) << endl;

    return 0;
}