/* For a given a string(str), find and return the highest occurring character. */

#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char a[]) {
    int count[256] = {0};
    int maxCount = 0;
    char maxChar = a[0];

    for ( int i = 0 ; a[i] != '\0' ; i ++){
        count[a[i]]++;
        if ( count[a[i]] >= maxCount){
            maxCount = count[a[i]];
            maxChar = a[i];
        }
    }
    return maxChar;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}