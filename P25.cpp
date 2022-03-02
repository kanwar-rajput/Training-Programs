// Write a program in C++ to convert the temperature in Kelvin to Celsius.

#include <iostream>
using namespace std;

float kelvinToCel(int K){
    cout << "\nCelsius : ";
    return (K - 273.15);
}


int main()
{
    int k;

    cout << "\nKelvin : "; cin >> k;
    cout << kelvinToCel(k) << endl;

    return 0;
}