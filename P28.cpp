/*
    If an integer number is given you have to return the reverse of that
    number e.g input: 5421 and output will be 1245
*/

#include <iostream>
using namespace std;

int revDigits(int x){
    int rev = 0;
    while (x != 0){
        rev = (x % 10) + (rev*10);  //  did you make this logic by yourself ?  discuss
        x /= 10;
    }
    cout << "\nReversed Number : ";
    return rev;
}

int main()
{
    int n;

    cout << "\nEnter a  number : "; cin >> n;
    cout << revDigits(n) << endl;

    return 0;
}