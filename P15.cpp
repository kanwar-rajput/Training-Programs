// Write a program in C++ to calculate the volume of a sphere.

#include <iostream>
using namespace std;

const float PI = 3.14;

float volumeOfSphere(int radius){
    cout << "The volume of Sphere is : ";  // no output statement in a function
    return (4*PI*radius*radius*radius)/3; // That is because we want answer in float
}

int main()
{
    int radius;

    cout << "\nRadius of Sphere : "; cin >> radius;
    cout << volumeOfSphere(radius) << endl;

    return 0;
}