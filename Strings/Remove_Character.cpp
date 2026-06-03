/* Given a string and a character X, write a function to remove all occurrences of the character X from the string. */

#include<bits/stdc++.h>
using namespace std;

void removeAllOccurrencesOfChar(string input, char c) {
    for ( int i = 0 ; i < input.size() ; i++) {
        if (input[i] == c){
            input.erase(i , 1) ; // erasing 1 character from i th posn
            i-- ; // as we reased one we need to go back 1 step
        } 
    }
    cout << input ;
}

int main(){
    string a;
    cin>>a;
    char c;
    cin>>c;
    removeAllOccurrencesOfChar(a,c);
}