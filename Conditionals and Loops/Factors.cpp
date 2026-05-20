/* Write a program that takes a number as input and prints all its factors except 1 and the number itself.. If the number has only two factors (1 and the number itself), then the program should print -1.
*/

#include<iostream>
using namespace std;

int main() {
    int n ;
    bool isPrime = true ;
    cin >> n ;

    for ( int i = 2 ; i < n ; i++) {
        if ( n%i == 0) {
            cout << i << " " ;
            isPrime = false ;
        }
    }

    if (isPrime){
        cout << "-1" ;
    }
	
}

/* can use boolean checks, interesting!! */