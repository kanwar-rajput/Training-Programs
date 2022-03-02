// Write a function that returns the area of a circle .

#include <iostream>
using namespace std;

const float PI = 3.14;
// getArea   use    naming conventions
float area(float r){
    cout << "\nThe area of Circle is : " ; // SOLID
    return 2*(PI * (r*r));
}


int main()
{
    float radius;

    cout << "\nEnter Radius : " ; cin >> radius ;
    cout << area(radius) << endl;
    return 0;
}