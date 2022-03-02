// Write a program in C++ to convert temperature in Celsius to Fahrenheit.

#include <iostream>
using namespace std;

float celToFar(int C){  // variable should be in lowercase  and should be proper variable name
    cout << "\nFarhenheit : ";  // no output 
    return (C * 9/5.0) + 32;
}


int main()
{
    int c;   //  use proper  variable  name !

    cout << "\nCelsius : "; cin >> c;
    cout << celToFar(c) << endl;  // use proper naming

    return 0;
}