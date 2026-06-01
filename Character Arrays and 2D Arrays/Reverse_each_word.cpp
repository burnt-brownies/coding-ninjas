/* Aadil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a function so as to change the sentence such that each word in the sentence is reversed. A word is a combination of characters without any spaces.

Example:
Input Sentence: "Hello I am Aadil"
The expected output will look, "olleH I ma lidaA". */

#include <iostream>
#include <cstring>
using namespace std;

void reverseEachWord(char a[]){
    int i = 0;
    int start = 0;

    while (true) {
        // Check if current character is space or end of string
        if (a[i] == ' ' || a[i] == '\0') {
            // Reverse the word from 'start' to 'i - 1'
            int left = start;
            int right = i - 1;
            while (left < right) {
                char temp = a[left];
                a[left] = a[right];
                a[right] = temp;
                left++;
                right--;
            }
            // Move start to the next word
            start = i + 1;
        }

        // If end of string is reached, break
        if (a[i] == '\0') {
            break;
        }
        
        i++;
    }

}

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}