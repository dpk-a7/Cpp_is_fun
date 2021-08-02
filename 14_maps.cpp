#include <iostream>
using namespace std;
#include <string>
#include <map>

int charCounter_getFreq(string test){
    map<char,int> freq;

    for (int i = 0; i < test.length(); ++i){
        char letter = test[i];
        if (freq.find(letter) == freq.end()){
            freq[letter] = 0;
        }
        freq[letter]++;
    }
    for (auto itr = freq.begin(); itr != freq.end(); ++itr){
        cout << itr->first << ":" << itr->second << endl;
    }
    return 0;
}

int main(){
 /*
 Maps: associative containers that stores 
 elements formaed by a combination of a key 
 value and a mapped value.
 If a value doesn't exist then map will return 0.
 */
    //creating a map
    map<char, int> mp = {
        {'A',1},
        {'B',2},
        {'C',3}
    };
    //Accessing elements in a map
    cout << mp['A'] << endl;

    //inserting elements in a map
    mp['C'] = 3;
    cout << mp['C'] << endl;
    mp.insert(pair<char, int>('D',4));
    cout << mp['D'] << endl;
    pair<char, int> p('E',5);
    mp.insert(p);
    cout << p.first << endl;    
    cout << p.second << endl;

    //erase an element
    mp.erase(p.first);
    mp.erase('D');
    mp.clear(); // removes everything

    cout << mp.empty() << endl; // if map is empty it will return 1 else 0.
    cout << mp.size() << endl; // get the lenth of the map.

    //Iterating over a map
    for(map<char, int>::iterator itr = mp.begin(); itr != mp.end(); ++itr){ //itr is a pointer
        // cout << (*itr).first << endl; 
                //or
        cout << itr -> second << endl;
    }
    cout << "~~~~" << endl;
    string t1 = "Hola world my name is Deepak!";
    charCounter_getFreq(t1);
}