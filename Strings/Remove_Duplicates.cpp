/* You are given a string 'STR' consisting of lower and upper case characters. You need to remove the consecutive duplicates characters, and return the new string. */

#include <iostream>
#include <string>
using namespace std;

// method - 1

string removeConsecutiveDuplicates(string a) {
    for ( int i = 0 ; i < a.size() - 1 ; i++) {
        if (a[i] == a[i+1]) {
            a.erase(i ,1) ;
            i-- ;
        }
    }

    return a ;
}

// method - 2 - building a new string and putting in that

string removeConsecutiveDuplicates(string a) {
    string result = "";
    result += a[0];  // always keep first char
    
    for (int i = 1; i < a.size(); i++) {
        if (a[i] != a[i-1]) {  // only add if different from previous
            result += a[i];
        }
    }
    return result;
}

// method - 3 - editing in the same string

string removeConsecutiveDuplicates(string a) {
    int writeIdx = 0;
    for (int i = 0; i < a.size(); i++) {
        if (i == 0 || a[i] != a[i-1]) {
            a[writeIdx++] = a[i];
        }
    }
    a.resize(writeIdx);
    return a;
}

int main() {
    
    string s;
    cin >> s;
    s = removeConsecutiveDuplicates(s);
    cout << s;
}