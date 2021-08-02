#include <iostream>
using namespace std;
#include <string>
#include <math.h>


int main(){
    int x = 10;
    int y = 20;
    
    // Arithmatic
    int Sum = x + y;
    int Sub = y - x;
    float Div = y/x;
    int Mult = x * y;
    double Power = pow(x,y); //pow a function of math.h module
    int Mod = x % y;

    // Compound assignment
    x += 2;
    x -= 2;
    x *= 2;
    x /= 2;
    x %= 3;
    x++; //increment
    x--; //decrement

    // Order
    /*
    (B)racket
    (E)xponets
    (D)ivision / (M)ultiplication
    (A)ddition
    (S)ubtraction
    */

   // Comparison 
    /*
    Always return a bool value (1[true], 0[false])
    > greater than
    < less than
    >= greater than equal to
    <= less than equal to
    == equal
    != not equal
    */
   bool ans = x > y;
   bool charac = 'a' == 'a'; //True
   bool str = "hello" == "Hello"; //False
   bool chara = 'a' < 'b'; // True <- Lexicographical {comparing ascii values}
   /*
    In mathematics, the lexicographical or lexicographic order is a generalization
    of the alphabetical order of the dictionaries to sequences of ordered symnols or, more generally,
    of elements of a totally ordered set.
   */

  // Logical operators
  /*
    operations on bool values
  && and
  || or
   ! not

  */



}