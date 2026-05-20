/* Write a program that takes a character as input and prints 1, 0, or -1 according to the following rules.



1, if the character is an uppercase alphabet (A - Z).
0, if the character is a lowercase alphabet (a - z).
-1, if the character is not an alphabet.


Example:
Input: The character is 'a'.

Output: 0

Explanation: The input character is lowercase, so our answer is  0. */

#include<iostream>
using namespace std;

int main() {
	char var ;
    cin >> var ;

    if ( var >= 'A' && var <= 'Z' ) {
        cout << "1" << endl ;
    }
    else if ( var >= 'a' && var <= 'z' ){
        cout << "0" << endl ;
    }
    else {
        cout << "-1" << endl ;
    }
	
}