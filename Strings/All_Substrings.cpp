/* For a given input string(str), write a function to print all the possible substrings. */

#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

// method - 1

void printSubstrings(string a) {
    for ( int i = 0 ; i < a.size() ; i++){
        for ( int j = i ; j < a.size() ; j++){
            cout << a.substr(i , (j-i+1)) << endl;

        }
    }
}

int main() {
    string input;
    getline(cin, input);
    printSubstrings(input);
    return 0;
}