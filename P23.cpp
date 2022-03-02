// Write a program in C++ that converts kilometers per hour to miles per hour.
// 1Km = 0.6213712 mile

#include <iostream>
using namespace std;
// see my comments in other programs
const float MILE = 0.6213712;

float kphToMph(int x){
    cout << "\nMiles Per Hour : ";
    return MILE*x;
}

int main()
{
    int kmh;

    cout << "\nKilo Meter Per Hour : "; cin >> kmh;
    cout << kphToMph(kmh) << endl;

    return 0;
}