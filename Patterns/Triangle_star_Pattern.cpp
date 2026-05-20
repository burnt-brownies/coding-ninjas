/*
Print the following pattern for the given N number of rows.

Pattern for N = 4
*
**
***
****
Note : There are no spaces between the stars (*).
*/

#include<iostream>
using namespace std;


int main(){
	int n, row, col ;
	cin >> n ;

	for ( row = 1 ; row <= n ; row++) {
		for ( col = 1 ; col <= row ; col++) {
			cout << "*" ;
		}
		cout << "\n" ;
	}
  
}


