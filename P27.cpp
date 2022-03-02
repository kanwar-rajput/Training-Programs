// If an integer number is given you have to return the sum of that number 
// a. If input is 5481 output will be 18

#include <iostream>
using namespace std;

int sumOfDigits(int x){
    int sum = 0;
    while (x != 0){
        sum += (x % 10);
        x /= 10;
    }
    cout << "\nSum of Digits : ";
    return sum;
}

int main()
{
    int n;

    cout << "\nEnter a  number : "; cin >> n;
    cout << sumOfDigits(n) << endl;

    return 0;
}