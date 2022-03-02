// Write a program in C++ to calculate the volume of a cube.

#include <iostream>
using namespace std;
// function naming convention is good   ,  its called  camelcase  incase you dont know it
int volumeOfCube(int Side){ // variable should be in lower case
    cout << "The volume of Cube is : ";  // no output statement 
    return (Side*Side*Side); // That is because we want answer in float
}

int main()
{
    int Side; // always initialize

    cout << "\nSide of Cube : "; cin >> Side;
    cout << volumeOfCube(Side) << endl;

    return 0;
}