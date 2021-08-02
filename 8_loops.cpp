#include <iostream>
using namespace std;
#include <string>

/*
i++ -> Assign -> Increment
++i -> Increment -> Assign
*/

int main(){

    // for( initialize; compare, increment or decrement)
    for(int i= 0; i <10; ++i){
        if(i % 2 == 0){
            cout << i << endl;
        }  
    }cout << endl;
    for(int i = 0; i<20; i+=2){
        cout << i << endl;
    }cout << endl;
    int ar1 [] = {3,1,5,4,6,4,78};
    int ar2 [10];
    for (int i = 0; i< sizeof(ar1)/sizeof(ar1[0]); ++i){
        cout << "Array1-> " << ar1[i] << endl;
        ar2[i] = i * 2;
        cout << "Array2-> " << ar2[i] << endl;
    }

    // while( condition)
    string pwd = "g123";
    string i = "";
    int atmp = 5;
    while(i != pwd && atmp!=0){
        cout << "Please Enter password (attempt "<< atmp << " left)" << endl;
        cin >> i;
        --atmp;
    }
    if(atmp == 0){
        cout << "Sorry you exceeded attempts!";
    }else {
        cout << "Success!";
    }

    int j = 0;
    while(j < 10){
        if (j == 5){
            break; // break out of a loop immediately
        }
        ++j;
    }

    int k = 0;
    while (k <= 10){
        if (k == 3 || k == 7){
            continue; // if true skip the execution till next iteration
        }
        cout << k << endl;
    ++k;
    }

    //do{}while(condition)
    int l = 0;
    do{
        cout << l << endl;
        ++l;
    }while(l<10);

    string pwd = "g123";
    string i; // able to just declare a variable with initialization
    int atmp = 5;
    do{
        cout << "Please Enter password (attempt "<< atmp << " left)" << endl;
        cin >> i;
        --atmp;
    }while(i != pwd && atmp!=0);
    if(atmp == 0){
        cout << "Sorry you exceeded attempts!";
    }else {
        cout << "Success!";
    }

}