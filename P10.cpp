/*

    Write a program which will ask the user to enter his/her marks (out of 100).
    Define a function that will display grades according to the marks entered as
    below:
    Marks Grade:
        91-100 AA
        81-90 AB
        71-80 BB
        61-70 BC
        51-60 CD
        41-50 DD
        <=40 Fai

*/

#include <iostream>
using namespace std;


// never  do  input and output  in a function
// S  -  SOLID Principles    discuss
void grades(int number){
    cout << "\nGrade : ";
    if ( (number > 90) && (number <= 100) ){
        cout << "AA";
    }
    else if ( (number > 80) && (number <= 90) ){
        cout << "AB";
    }
    else if ( (number > 70) && (number <= 80) ){
        cout << "BB";
    }
    else if ( (number > 60) && (number <= 70) ){
        cout << "BC";
    }
    else if ( (number > 50) && (number <= 60) ){
        cout << "CD";
    }
    else if ( (number > 40) && (number <= 50) ){
        cout << "DD";
    }
    else {
        cout << "Fail";
    }
    cout << "\n";
}

int main()
{

    int number;

    cout << "\nEnter Number : " ; cin >> number;
    grades(number);

    return 0;
}
