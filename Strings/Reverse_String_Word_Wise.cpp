/* Reverse the given string word-wise. The last word in the given string should come at 1st place, the last-second word at 2nd place, and so on. Individual words should remain as it is. */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string reverseStringWordWise(string str) {
    reverse(str.begin(), str.end());
    
    int start = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') {
            reverse(str.begin() + start, str.begin() + i);
            start = i + 1;
        }
    }
    reverse(str.begin() + start, str.end());  // last word as there is no space after it
    
    return str;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}