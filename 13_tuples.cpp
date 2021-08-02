#include <iostream>
using namespace std;
#include <string>
#include <tuple>

int main(){
    /*
    Tuple:
    > Like an array hold many different elements, but can be of different data type.
    > declaring and initializing tuple -> "tuple <, seperated data types> NameOfTuple(values or elements);"
    > to access a tuple -> "get<'index'>(NameOFTuple)"
    */
   tuple <int, string, float> Person(23, "Deepak", 5.5);
   
   //access a tuple element
   cout << get<1>(Person) << endl;

   // update a tuple element:
   get<2>(Person) = 5.7;
   cout << get<2>(Person) << endl;
   
   tuple <int, char, bool, float> thing;
   thing = make_tuple(12,'A', true, 9.87);

   // swapping 2 tuples
   tuple <int, int> T1(1,2);
   tuple <int, int> T2(3,4);
   cout << get<0>(T1) << endl;
   cout << get<1>(T1) << endl;
   cout << get<0>(T2) << endl;
   cout << get<1>(T2) << endl;
   T1.swap(T2); // both variable should have same data-types in it.
   cout << get<0>(T1) << endl;
   cout << get<1>(T1) << endl;
   cout << get<0>(T2) << endl;
   cout << get<1>(T2) << endl;

   // Decompose a tuple to its individual elements using tie().
   tuple <int, int, int> a(1,2,3);
   int x,y,z; // should have same data type as tuple data types
   tie(x,y,z) = a;
   cout << x << endl;
   cout << y << endl;    
   cout << z << endl; 

   //Tuple Concatenation using tulpe_cat()
   tuple <int, char> m(1, 'A');
   tuple <int, string> n(3, "Hello world!");
   tuple <int, char, int, string> l = tuple_cat(m,n); //OR auto l = tuple_cat(m,n);
   cout << get<3>(l) << endl;
}    