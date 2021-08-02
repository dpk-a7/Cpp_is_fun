#include <iostream>
using namespace std;
#include <string>

int main(){
    /**
    switch (expression)
    {
    case constant-expression :
        code 
        break;
    
    default:
        break;
    }
    */
   int i;
   cout << "Guess the number I have:";
   cin >> i;
   switch (i)
   {
    case 1:
       cout << "Not 1";
       break;
    case 77:
       cout << "50! Correct";
       break;
    case 100:
       cout << "Not 100";
       break;
   
   default:
       cout << "Lol NO!";
       break;
   }
}