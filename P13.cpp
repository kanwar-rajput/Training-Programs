/*
    Write a program in C++ to find Size of fundamental data types.Sample
    Output:
    Find Size of fundamental data types :
    ------------------------------------------
    The sizeof(char) is : 1 bytes
    The sizeof(bool) is : 1 bytes
*/
#include <iostream>
using namespace std;
// see comments
int main()
{
    cout << "\nFind Size of fundamental data types : ";
    cout << "\n------------------------------------------";
    cout << "\nThe sizeof(bool) is :   " << sizeof(bool) << " bytes";
    cout << "\nThe sizeof(int) is :    " << sizeof(int) << " bytes";
    cout << "\nThe sizeof(long) is :   " << sizeof(long) << " bytes";
    cout << "\nThe sizeof(short) is :  " << sizeof(short) << " bytes";
    cout << "\nThe sizeof(char) is :   " << sizeof(char) << " bytes";
    cout << "\nThe sizeof(float) is :  " << sizeof(float) << " bytes";
    cout << "\nThe sizeof(string) is : " << sizeof(string) << " bytes";
    cout << "\nThe sizeof(double) is : " << sizeof(double) << " bytes";
    cout << endl;
    return 0;
}