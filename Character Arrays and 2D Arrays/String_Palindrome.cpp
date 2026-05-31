/* Given a string, determine if it is a palindrome, considering only alphanumeric characters. */

#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char str[]) {
    int length = 0 ;
    for ( int i = 0; str[i] != '\0'; i++) {
        length ++ ;
    }
    
    for ( int i = 0 ; i < length/2 ; i++) {
        if ( str[i] != str[length - i - 1]) return false ;
    }

    return true ;
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}