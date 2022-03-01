/* . A person is eligible to vote if his/her age is greater than or equal to 18. Define a
    function to find out if he/she is eligible to vote.
*/
#include <iostream>
using namespace std;

bool canVote(int age){
    cout << "\nCan you vote : " ; 
    return age >= 18;
}

int main()
{

    int age;

    cout << "\nYour Age : " ; cin >> age;
    cout << canVote(age) << endl;

return 0;
}