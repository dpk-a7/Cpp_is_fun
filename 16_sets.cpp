#include <iostream>
using namespace std;
#include <string>
#include <set>

int test(){
    string test = "This is a test 1,2,3,4,5,6 hela";
    string find = "hello";
    set <char> findletters;
    
    for (int i = 0; i < find.length(); ++i){
        char letter = find[i];
        findletters.insert(letter);
    }
    for (int i = 0; i < test.length(); ++i){
        char letter =  test[i];
        findletters.erase(letter);
    }
    if (findletters.size() > 0){
        cout << "NO! It does not have all letters!" << endl;
    }else{
        cout << "YES!" << endl;
    }
    return 0;
}


int main(){
    /*
    Set are a type of associative containers in which each element has to be 
    unique, because the value of the elements identifies it.
    */

   // Declare and initialize
   set<char> s1;
   s1 = {'A','B','A','B','a','b'};

    // iterate
   for (auto itr = s1.begin(); itr != s1.end(); ++itr){
       cout << *itr << endl;
   }

   //insert
   s1.insert('C');

   //erase
   s1.erase('C');

   // check if an element is present
   if (s1.find('C') == s1.end()){
       cout << "Could not find C" << endl;
   }else{
       cout << "C is present in set" << endl;
   }
   test();
}