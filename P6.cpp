// Write a function that returns the minimum among three numbers entered by the user.


#include <iostream>
using namespace std;

int minOfThree(int x , int y , int z){
    cout << "\nMin Number is  : " ; // no output statement
    if ((x < y) && (x < z)){
        return x; // Return 'x' if it's smaller from y,z
    }
    else if ((y < x) && (y < z)){
        return y; // Return 'y' if it's smaller from x,z
    }
    else {
        return z; // // Return 'z' if above conditions are false
    }
}

int main()
{
    int x,y,z;
    
    cout << "\nEnter Number 1 : " ; cin >> x;
    cout << "\nEnter Number 2 : " ; cin >> y;
    cout << "\nEnter Number 3 : " ; cin >> z;

    cout << minOfThree(x,y,z) << endl;

    return 0;
}