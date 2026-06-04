/* Given a string S (that can contain multiple words), you need to find the word which has minimum length.

Note : If multiple words are of same length, then answer will be first minimum length word in the string. Words are seperated by single space only. */

#include<iostream>
#include <climits>
#include <cstring>
using namespace std;

void minLengthWord(char input[], char output[]){
    int i ;
    int minIndex = 0 ;
    int start = 0 ;
    int minLength = INT_MAX;

    while (start < (int)strlen(input)) {
        int length = 0 ;
        for ( i = start ; input[i] != ' ' && input[i] != '\0' ; i++) { // stops at space or end of string
            length++ ;
        }
        
        if (length < minLength) {
            minLength = length ;
            minIndex = start ;
        }

        start = i + 1 ;
    }

    int k = 0;
    for (int i = minIndex; input[i] != ' ' && input[i] != '\0'; i++) {
        output[k] = input[i];
        k++;
    }
    output[k] = '\0';  
}

int main(){
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout << output << endl;
}
