#include <iostream>
using namespace std;
#include <string>

int main(){
    /* 
    cin is an object of class iostream. it is used to accept
    the input from the standard input device i.e. keyboard

    if we get an invalid datatype for cin it will stop the excution.
    to know whether there is a faliure in cin we use cin.fail() it returns 1 if there is a faliure
    and 0 if there is not.
    */
    int n;
    cout << "Please enter int number:";
    cin >> n;
    cin.clear();// clears invalid input error in cin.
    cin.ignore(1000, '\n'); // ignores numberof characters the user will type for an int data type which will avoid error.
    cout << cin.fail();
}