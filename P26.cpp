// If a 3 digit integer number is given you have to return the sum of
// that number ; input 548 output will be 17

#include <iostream>
using namespace std;

int sumOfThreeDigits(int x){
    int sum = 0;
    while (x != 0){
        sum += (x % 10);
        x /= 10;
    }
    cout << "\nSum of 3 Digits : ";
    return sum;
}
// see my comments in other programs  for suggestions
int main()
{
    int n;

    cout << "\nEnter a  number : "; cin >> n;
    cout << sumOfThreeDigits(n) << endl;

    return 0;
}