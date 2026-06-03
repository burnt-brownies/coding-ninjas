/* Write a program to do basic string compression. For a character which is consecutively repeated more than once, replace consecutive duplicate occurrences with the count of repetitions. */

#include <iostream>
#include <cstring>
#include<string>
using namespace std;

string getCompressedString(string &input) {
    string result = "";
    
    for (int i = 0; i < input.size(); ) {
        int count = 1;
        
        // count how many times input[i] repeats
        while (i + count < input.size() && input[i + count] == input[i]) {
            count++;
        }
        
        result += input[i];                          // append char
        if (count > 1) result += to_string(count);  // append count if >1, to_string converts int to str/char
        
        i += count;  // jump past all repeated chars
    }
    
    return result;
}

int main() {
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}