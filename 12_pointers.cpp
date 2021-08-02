#include <iostream>
using namespace std;
#include <string>

int main(){
    /*
                        Memory loaction
variable:               |--------------|
    int x = 3;  ------->|       3      | 
reference variable:     |--------------|
    int &y = x; -----------^ OX23AB   <----- Memory address for value 3 in memory. 
    
Pointer variable:       |--------------| 
    int *z = &x;------->|    OX23AB    | <-----Stores memory address of identifier x.
                        |--------------|
                             OXAB3F <------Pointer has its own memroy block and address.
    Pointer Rules:
    > When you create a pointer it can be just declared.
    > Pointers can only hold Reference values i.e memory address.
    > Pointers can be equal to null eg: int *a = NULL;
    > Pointer arithmetics are possible.
    > Referece cannot be changed but pointers can change as it take a seperate memory loaction.

    */

   int x = 12;
   int *y = &x; // has the memory address of x

   cout << &x << endl;
   cout << &y << endl; // will print the memory address of y, not of x.
   cout <<  y << endl; // will print memory address of x.
   cout << *y << endl; // will print value of x, known as Dereferencing a pointer.

    //using pointers with arrays:
    int z[] {1,2,3};
    int *head = z; //array 'z' stores reference value of first element in its array by default, so no need to use & before it.
    
    cout << head << endl;

    for (int i = 0; i < sizeof(z)/sizeof(z[0]); ++i){
        head = z + i;
        cout << head << " <---> " << *head << endl;
    }

}