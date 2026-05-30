/*
Print the following pattern for the given N number of rows.

Pattern for N = 3
 A
 BB
 CCC
 */

 /* method - 1 */

#include<iostream>
using namespace std;


int main(){
    int n ;
    cin >> n ;

    char ch = 'A' ;

    for ( int row = 0 ; row < n ; row++) {
        for ( int col = 0 ; col <= row ; col++) {
            cout << ch ;
        }
        cout << "\n" ;
        ch ++ ;
    }
}

/* method -2 -> deriving the character from the row number */ 

#include<iostream>
using namespace std;


int main(){
    int n ;
    cin >> n ;

    for (int row = 0; row < n; row++) {
        char ch = 'A' + row;  // derive directly
        for (int col = 0; col <= row; col++) {
            cout << ch;
        }
        cout << "\n";
    }
}

