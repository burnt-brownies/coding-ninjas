/*
Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.

That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.

Print count of characters, count of digits and count of white spaces respectively (separated by space).
*/

#include <iostream>
using namespace std;

int main() {
    int ch = 0, digit = 0, space = 0;
    char c;

    while ((c = cin.get()) != '$') {
        if (c >= 'a' && c <= 'z')
            ch++;
        else if (c >= '0' && c <= '9')
            digit++;
        else if (c == ' ' || c == '\t' || c == '\n')
            space++;
    }

    cout << ch << " " << digit << " " << space;
}