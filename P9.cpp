// Define a function to find out if number is prime or not.

#include <iostream>
using namespace std;

bool isPrime(int n){
    if (n == 0 || n == 1){ // If n = 0,1 return false, because they are not prime numbers.
        return false;
    }
    else {
        for(int i = 2 ; i < n ; i++){ // You can also use i <= n/2 to reduce the time
            if (n % i == 0){
                return false;
                break;
            }
        }
    }
    return true;
}
int main()
{
    cout << isPrime(0) << endl; // 0
    cout << isPrime(1) << endl; // 0
    cout << isPrime(9) << endl; // 0
    cout << isPrime(3) << endl; // 1

// Write Your Code Here

return 0;
}