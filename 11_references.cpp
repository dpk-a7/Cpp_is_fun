#include <iostream>
using namespace std;
#include <string>

int main(){
    /*
    Alias -> It is a name that refers to a previously defined type.

    References -> Is a simple reference datatype that is less powerful but safer 
    than the pointer type inherited from C programming.

    int x = 12; -> [12]
    int &y = a; ----^     <--- reference to 'x' value.
    */

    int a =2;

    // create a reference variable
    int &b = a;
    /* if we modify 'b' then it will also modify 'a'*/

    int a = 5;

    cout << a << endl; // will print 5
    cout << b << endl; // will print 5

    int c = 4;
    int d = c; // here 2 space in memory has been reserved for 'c' and 'd';
    int &e = c; // here one space in memory has been reserved for 'c' because 'e' is only used to reference 'c'.
    int &f =  e; // reference of reference.

    // Access the address the reference variable points to.
    int g = 12;
    int &h = g;
    int i = g;
    cout << &g << endl; // gives memory address for value 12.
    cout << &h  << endl; // will also print the same address like g.
    cout << &i << endl; // will give different memory addess though it stores same value of g. 


    // Reference rules:
    /*

     -> When you create a reference you must initialize it.
     -> reference cannot be initialized NULL.
     -> reference variable and the variable should be of same data type.
     
    */    
}