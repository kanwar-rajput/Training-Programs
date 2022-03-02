// Write a program to print the n numbers of fibonacci series

#include <iostream>
using namespace std;

int fibonacci(int x){
    int temp;
    for(int i = 1 ; i <= x ; i++){
        temp += i;
    }
    return temp;

}
//  why this function ?   and why making two functions ? 
int fibonacci2(int x){
    return x*(x+1)/2;
}


int main()
{
    cout << fibonacci(10) << endl;  // 55
    cout << fibonacci2(10) << endl; // 55

    return 0;
}
