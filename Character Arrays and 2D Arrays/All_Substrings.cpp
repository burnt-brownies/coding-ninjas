/* For a given input string(str), write a function to print all the possible substrings. */

#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(char input[]) {
    int len = strlen(input);
    
    for (int i = 0; i < len; i++) {        
        for (int j = i; j < len; j++) {    
            for (int k = i; k <= j; k++) { 
                cout << input[k];
            }
            cout << endl;
        }
    }
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}