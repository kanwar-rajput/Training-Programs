// Write a program in C++ to find the area of any triangle using Heron's Formula.

#include <iostream>
#include <math.h>
using namespace std;

float areaOfTriangle(int s1 , int s2 , int s3){  
    float S = (s1 + s2 + s3)/2;
    cout << "\nArea Of Triangle Using Heron's Formula : ";  // no output
    return sqrt(S*((S-s1)*(S-s2)*(S-s3)));  // all variables in lowercase
}

int main()
{
    int s1,s2,s3;

    cout << "\n Side 1 : "; cin >> s1;  //   you should  hardcode the value for fast development
    cout << "\n Side 2 : "; cin >> s2;
    cout << "\n Side 3 : "; cin >> s3;

    cout << "\n";

    cout << areaOfTriangle(s1,s2,s3) << endl;

    return 0;
}