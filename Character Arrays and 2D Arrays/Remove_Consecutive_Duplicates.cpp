/* or a given string(str), remove all the consecutive duplicate characters.

Example:
Input String: "aaaa"
Expected Output: "a"

Input String: "aabbbcc"
Expected Output: "abc" */

#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char input[]) {
    int k = 0 ;
    for ( int i = 0 ; input[i] != '\0' ; i++) {
        if (input[i] != input[k]){
            k++ ;
            input[k] = input[i] ;
        }
    }
    input[k+1] = '\0' ;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}