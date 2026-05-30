/* Print the following pattern for the given number of rows.

Pattern for N = 5
E
DE
CDE
BCDE
ABCDE */

#include<iostream>
using namespace std;

int main(){
    int n ;
    cin >> n ;

    for (int row = 1 ; row <= n ; row++) {
        char ch = 'A' + n - row ;
        for (int col = 1 ; col <= row ; col ++) {
            cout << ch ;
            ch++ ;
        }
        cout << "\n" ;
    }
}
