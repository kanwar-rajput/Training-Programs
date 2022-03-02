// Write a program in C++ to calculate the volume of a cube.

#include <iostream>
using namespace std;

int volumeOfCube(int Side){
    cout << "The volume of Cube is : ";
    return (Side*Side*Side); // That is because we want answer in float
}

int main()
{
    int Side;

    cout << "\nSide of Cube : "; cin >> Side;
    cout << volumeOfCube(Side) << endl;

    return 0;
}