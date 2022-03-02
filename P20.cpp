// Write a program in C++ to convert temperature in Celsius to Fahrenheit.

#include <iostream>
using namespace std;

float celToFar(int C){
    cout << "\nFarhenheit : ";
    return (C * 9/5.0) + 32;
}


int main()
{
    int c;

    cout << "\nCelsius : "; cin >> c;
    cout << celToFar(c) << endl;

    return 0;
}