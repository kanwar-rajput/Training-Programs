// Write a program in C++ to convert temperature in Fahrenheit to Celsius.

#include <iostream>
using namespace std;

float farToCel(int F){
    cout << "\nCelsius : ";
    return (F - 32) * 5/9.0;
}


int main()
{
    int f;

    cout << "\nCelsius : "; cin >> f;
    cout << farToCel(f) << endl;

    return 0;
}