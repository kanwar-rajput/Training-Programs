// Write a program in C++ to find the third angle of a triangle.

#include <iostream>
using namespace std;

int thirdAngle(int x , int y){
    cout << "\nAngle 3 : ";
    return 180 - (x + y);
}
// see my comments in other programs
int main()
{

    int x,y,z;

    cout << "\nAngle 1 : "; cin >> x;
    cout << "\nAngle 2 : "; cin >> y;

    z = thirdAngle(x,y);
    cout << z << endl;

    return 0;
}