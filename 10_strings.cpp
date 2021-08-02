#include <iostream>
using namespace std;
#include <string>

int main(){
    string A = "Hello World!";
    
    // Access a char
    cout << A[0] << endl; // will print 'H'

    // Get size of a string
    cout << A.size() << endl; // will print the size 11
    cout << A.length() << endl; // will print the size 11

    // Change a char
    A[6] = 'w'; // Hello W->world
    
    //loop through
    for(int i = 0; i< A.size(); ++i){
        char temp = A[i];
        cout << temp << endl;
    }


}