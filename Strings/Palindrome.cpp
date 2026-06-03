/* Write a function that takes a string as input and determines if it is a palindrome or not, considering only alphanumeric characters. */

#include<bits/stdc++.h>
using namespace std;

// method - 1

bool checkPalindrome(string str) {
    
    for ( int i = 0 ; i < str.size() / 2 ; i++) {
        if ( str[i] != str[str.size() - i - 1] ) return false ;
    }

    return true ;
}

// method 2 - same but with left and right pointers

bool checkPalindrome(string str) {
    int left = 0, right = str.size() - 1;
    while (left < right) {
        if (str[left] != str[right]) return false;
        left++;
        right--;
    }
    return true;
}

// method - 3 - reversing and comparing - one line - but something about space complexity here which is slightly not good i guess, will learn about it more in that section

bool checkPalindrome(string str) {
    string rev = str;
    reverse(rev.begin(), rev.end());
    return str == rev;
}

int main(){
    string a;
    cin>>a;
    cout << (checkPalindrome(a) ? "Palindrome" : "Not a Palindrome");
}