// Write a program to print the sum of two numbers defining your own function.

#include <iostream>
using namespace std;

float sum(float x , float y){
    return x + y;
}

int main()
{

    cout << sum(5,10) << endl;

    return 0;
}