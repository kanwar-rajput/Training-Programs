// Write a function that returns the maximum among three numbers entered by the user.


#include <iostream>
using namespace std;

int maxOfThree(int x , int y , int z){
    cout << "\nMax Number is  : " ;
    if ((x > y) && (x > z)){
        return x; // Return 'x' if it's larger from y,z
    }
    else if ((y > x) && (y > z)){
        return y; // Return 'y' if it's large from x,z
    }
    else {
        return z; // Return 'z' if above conditions are false
    }
}

int main()
{
    int x,y,z;
    
    cout << "\nEnter Number 1 : " ; cin >> x;
    cout << "\nEnter Number 2 : " ; cin >> y;
    cout << "\nEnter Number 3 : " ; cin >> z;

    cout << maxOfThree(x,y,z) << endl;

    return 0;
}