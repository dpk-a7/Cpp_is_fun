#include <iostream> // import statement
// using namespace std;

/*

-> "namespace" is a declarative region that provides a scope to the identifiers(names of types, functions, variables,ect) inside it,
   and is present in iostream library.
-> Inside of iostream there is a namespace defined std, and inside of std there is function called cout.
-> If we don't know where cout funtion is in iostream library the we can use std::<functio name>.
-> "std::" means, inside of iostream find std and then in std find cout.
-> Every statement should end with a ";" 
-> Every cpp file must contain a main function that will be executed when compiled.
-> A function must return value, below function is of int and must return value int.
-> "<<" stream insertion operator.

*/

int main(){
    std::cout << "Hello" << "World" << "!"; // c-out is outputing characters to the console
    std::cout << "Hello" << "Mars" << "!"; // this will not be printed in new line as cout will stream what it gets.
    // to print sentences in new line we use escape character.
    std::cout << "Hello" << "World" << "!\n";
    std::cout << "Hello" << "Mars" << "!";
    // another way to pring sentence in new line is using endl
    std::cout << "Hello" << "World" << "!\n" << std::endl;
    std::cout << "Hello" << "Mars" << "!";
    return 0;
}
