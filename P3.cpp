// Write a function that returns the circumference of a circle.

#include <iostream>
using namespace std;

const float PI = 3.14;

float crmf(float r){
    cout << "\nThe Circumference of Circle is : " ;
    return 2*(PI * r);
}
// see my comments in other programs  for suggestions
int main()
{
    float radius;

    cout << "\nEnter Radius : " ; cin >> radius ;
    cout << crmf(radius) << endl;
    return 0;
}