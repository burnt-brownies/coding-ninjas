/* For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.

Permutations of each other
Two strings are said to be a permutation of each other when either of the string's characters can be rearranged so that it becomes identical to the other one.

Example: 
str1= "sinrtg" 
str2 = "string"

The character of the first string(str1) can be rearranged to form str2 and hence we can say that the given strings are a permutation of each other. */

#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char str1[], char str2[]) {

    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0') {
        len1++;
    }
    while (str2[len2] != '\0') {
        len2++;
    }
    if (len1 != len2) {
        return false;
    }
    
    int count[256] = {0};
    for (int i = 0; str1[i] != '\0'; i++) {
        count[str1[i]]++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        count[str2[i]]--;
        if (count[str2[i]] < 0) {
            return false;
        }
    }

    return true;
    
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}