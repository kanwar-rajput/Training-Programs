// Write a program to print the factorial of a number by defining a function named

#include <iostream>
using namespace std;
/*
Function  should Always return 
No Input   /  Output in a function
discuss   Recursive Functions
*/
void factorial(int x){
    int temp = 1;
    cout << "\n " << x << "! = " ;
    if (x == 0) {
        cout << "1";
    }
    else {
        for(int i = 1 ; i <= x ; i++){
            cout << i << " * " ; 
            temp *= i;
        }
        cout << "1 = " << temp << endl;
    }
}

int main()
{
    int f;
    cout << "Enter a number : " ; cin >> f;
    factorial(f);

    return 0;
}
