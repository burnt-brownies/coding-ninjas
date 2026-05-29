/* 
Check whether a given number ’n’ is a palindrome number.

Note :
Palindrome numbers are the numbers that don't change when reversed. 

Example:
Input: 'n' = 51415
Output: true
Explanation: On reversing, 51415 gives 51415.

*/

#include<iostream>
using namespace std;

bool palindrome(int n){
    int rev = 0 ;
    int original = n ;

    while ( n != 0) {
        int rem = n % 10 ;
        rev = rev * 10 + rem ;
        n = n / 10 ;
    }

    return rev == original; 
}

int main() {
	int n;
	cin >> n;
    bool pal = palindrome(n);
    if(pal == true)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}