/*
Print the following pattern for the given N number of rows.

Pattern for N = 4
A
BC
CDE
DEFG
*/

#include<iostream>
using namespace std;


int main(){
	int n ;
	cin >> n ;

	for ( int row = 0 ; row < n ; row++) {
		char ch = 'A' + row ;
		for ( int col = 0 ; col <= row ; col++) {
			cout << ch ;
			ch++ ;
		}
		cout << "\n" ;
	}
}

