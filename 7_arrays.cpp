#include <iostream>
#include <string>
using namespace std;

// Array
/*
It is a series of elements of the same type placed in contiguous memory locations
that can be individually referenced by adding an index to a unique identifier.
-> <data type in the array> <array name> [ array size] = {array elements,...};
-> onces array is defiend the size cannot be changed.
-> if you dont initialize array with its values inside of {} then it will store random values in it as default.
*/

int main(){
    //Declaring an Array
    int A[4] = {1,2,3};
    int x = 10;
    int B [x];
    int C[] = {1,2,3,4,5}; // automatically gets the array lenth
        //or 
    int D[3] {1,2,3};
    int E[] {9,2,3,2};

    string F[] {"Hello", "World", "!"};
    char G[] {'a','b','c'};
    float H[] {2.1, 3.56 ,-9.8723};

    //Accessing Array
    cout << A << endl << "Enter index no:"; //will print memory location of the array.
    int i;
    cin >> i;
    cout << A[i] << endl;

    //Change element in an Array
    A[0] = 54;
    cout << A[0] << endl;

    //get size of an array
        /*
        -> sizeof(); return size in bytes used by an array in memory.
        It is a compile-time operator that determines the size, in bytes, of a 
        variable or data type. It can be used to get the size of classes, structures, unions
        and any other user defined data types.
        */
    int Len_of_A =  sizeof(A)/sizeof(A[0]);
    cout << Len_of_A;
}