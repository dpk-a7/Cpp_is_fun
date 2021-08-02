#include <iostream>
#include <string>
using namespace std;
#include <vector>

int main(){
    /*
    Vectors are a sequence containers 
    representing arrays that can change in size.
    vector can change it size.
    */
   vector<int>  v1 = {1,2,3};
   cout << v1[1] << endl; // get second element
   cout << v1.front() << endl; // get first element
   cout << v1.back() << endl; // get last element
   cout << v1.size() << endl; // get length of an array
   cout << v1.capacity() << endl; // how much element an array can hold currently
   v1.push_back(10); // append
   v1.pop_back(); //removing last element, which will effect the size but not the capacity.
   v1.shrink_to_fit();// to resize the capacity.

   // instering an element
   v1.insert(v1.begin(), 10); //  insert 10 at index 0
   v1.insert(v1.begin() + 1, 11); // insert 11 at index 1
   v1.insert(v1.begin() + 2, 12); // insert 12 at index 2

   //erase an element
   v1.erase(v1.begin());

   //Iterate a vector
   for (int i = 0; i < v1.size(); ++i){
       cout << v1[i] << endl;
   }
   //Or
   for (auto itr = v1.begin(); itr != v1.end(); ++itr){
       cout << *itr << endl;
   }

}