#include <iostream>
using namespace std;
#include <string>

int main(){
    int i;
    cout << "enter number";
    cin >> i;
    if (i < 25 ){
        if (i<10){
            cout << "i is less than 10";
        }else{
            cout << "i is less than 25";
            }
    }else if (i>25 && i<50){
        cout << "i is between 25 and 50";
    }else{
        cout << "greater than 50";
        }
}

