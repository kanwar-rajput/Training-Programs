/*
    If an integer number is given you have to return whether the number
    is palindrome if not e.g 1551 is palindrome and 1515 is not palindrome.
*/

#include <iostream>
using namespace std;

int revDigits(int x){
    int rev = 0;
    while (x != 0){
        rev = (x % 10) + (rev*10);
        x /= 10;
    }
    return rev;
}

bool isPalindrome(int x){
    cout << "\nIs this Palindrome : ";
    return x==revDigits(x);
}

int main()
{
    int n;

    cout << "\nEnter a  number : "; cin >> n;
    cout << isPalindrome(n) << endl;

    return 0;
}