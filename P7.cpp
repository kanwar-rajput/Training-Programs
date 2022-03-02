// Define a function to find out whether a given number is even or odd.

#include <iostream>
using namespace std;
// good naming convention
bool isEven(int x){
    return x%2==0; // 1 = Even , 0 = Odd    //   proper formatting !
}

int main()
{
    cout << isEven(2) << endl; //1
    cout << isEven(3) << endl; //0
return 0;
}