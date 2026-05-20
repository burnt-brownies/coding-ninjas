/* 
Print the following pattern for the given N number of rows.

Pattern for N = 4
4444
4444
4444
4444
*/

#include<iostream>
using namespace std;


int main(){
	int n , row, col ;
	cin >> n ;

	for ( row = 0 ; row < n ; row++) {
		for (col = 0 ; col < n ; col++ ) {
			cout << n ;
		}
		cout << endl ;
	}
}

