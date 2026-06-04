/* Write as you speak is a special sequence of strings that starts with string “1” and after one iteration you rewrite the sequence as whatever you speak.

Example :
The first few iterations of the sequence are :
First iteration: “1”
    As we are starting with one.

Second iteration: “11”
    We speak “1” as   “one 1” then we write it as “11”

Third iteration: “21”
    We speak “11” as “Two 1” then we write it as “21”

Fourth iteration: “1211”
    We speak “21” as “one 2, one 1”  then we write it as “1211”

Fifth iteration: “111221”
    We speak “1211” as “one 1, one 2, two 1” then we write it as “111221”

Sixth iteration: “312211”
    We speak “111221” as “three 1, two 2, one 1” then we write it as “312211”
You will be given a single positive integer N, Your task is to write the sequence after N iterations. */


#include <iostream>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

string writeAsYouSpeak(int n) {
    string current = "1";  
    
    for (int iter = 1; iter < n; iter++) {  // n-1 iterations as already have 1st
        string next = "";
        int i = 0;
        
        while (i < current.size()) {
            char ch = current[i];   // current character
            int count = 0;
            
            while (i < current.size() && current[i] == ch) { // keep going as long as character is same, i.e. character repeats
                count++;
                i++;
            }
            
            next += to_string(count) + ch;  // append count then character, to_string converts number to string so that properly it is appended
        }
        
        current = next;  // move to next iteration
    }
    
    return current;
}

signed main(){
    int n , m , q , tc;
    cin>>tc;
    while(tc--) {
        cin>>n;
        cout<<writeAsYouSpeak(n)<<endl;
    }
    return 0;
}


