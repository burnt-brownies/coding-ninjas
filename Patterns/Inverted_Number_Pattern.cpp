/*
Print the following pattern for the given N number of rows.

Pattern for N = 4
4444
333
22
1
*/

#include<iostream>
using namespace std;


int main(){
	int n ;
	cin >> n ;

	for ( int row = n ; row > 0 ; row--) {
		for (int col = 1 ; col <= row ; col++) {
			cout << row ;
		}
		cout << "\n" ;
	}
}