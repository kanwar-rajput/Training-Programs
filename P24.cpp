// Write a program in C++ that converts kilometers per hour to miles per hour.
// SPEED = 1.609 , SPEED x mph = kph

#include <iostream>
using namespace std;

const float SPEED = 1.609;
//  function name should be general  discuss   it could be   toKilometer( int miles )  and vice verce
float mphToKmh(int x){
    cout << "\nKilo Meter Per Hour : ";
    return SPEED*x;
}
// see my comments in other programs  for suggestions

int main()
{
    int mph;

    cout << "\nMiles Per Hour : "; cin >> mph;
    cout << mphToKmh(mph) << endl;

    return 0;
}