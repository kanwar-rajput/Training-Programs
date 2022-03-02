// Write a program in C++ to swap two numbers.

#include <iostream>
using namespace std;

void swap(int* x,int* y){
    int z = *x; // We need a new variable to store some value
    *x = *y; // if we do this step on next line the value wont change for x
    *y = z; // Because y = x and x = y so they wont swap
}

// see comments
int main()
{
    int x=10 , y = 20;

    cout << "\nValues Before Swapping : " << endl;

    cout << x << endl;
    cout << y << endl;

    swap(&x,&y);

    cout << "\nValues After Swapping : " << endl;

    cout << x << endl;
    cout << y << endl;

    return 0;
}