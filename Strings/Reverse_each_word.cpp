/* Aadil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a function so as to return the sentence such that each word in the sentence is reversed.

Example:
Input Sentence: "Hello, I am Aadil!"
The expected output will print, ",olleH I ma !lidaA". */

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

// method - 3 - without using the cin property (cin stops takinf i/p after a space is encountered), reverses each word inplace between spaces

    string reverseEachWord(string str) {
        int start = 0;
        for (int i = 0; i <= str.size(); i++) {
            if (i == str.size() || str[i] == ' ') {
                reverse(str.begin() + start, str.begin() + i);
                start = i + 1;
            }
        }
        return str;
    }

int main(){
    string word ;

    // method - 1

    while ( cin >> word){ // till whenever we can read i/p
        reverse(word.begin() , word.end());
        cout << word << " ";
    }

    // bug in method - 1 - it prints a space after every word, icluding the last one, some cases accept that as an answer, others dont

    // method - 2 (the fix) 
    /* Instead of printing space after every word, print space before every word except the first.
    word 1 →  just print "olleH"          →  "olleH"
    word 2 →  print " " then "I"          →  "olleH I"
    word 3 →  print " " then "ma"         →  "olleH I ma" */

    bool first = true;
    while (cin >> word) {
        reverse(word.begin(), word.end());
        if (!first) cout << " ";
        cout << word;
        first = false;
    }
}