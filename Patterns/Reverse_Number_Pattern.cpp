/* 
Print the following pattern for the given N number of rows.

Pattern for N = 4
1
21
321
4321
*/

#include<iostream>
using namespace std;


int main(){
	int n ;
	cin >> n ;

	for ( int row = 1 ; row <= n ; row++) {
		for ( int col = row ; col > 0 ; col--) {
			cout << col ;
		}
		cout << "\n" ;
	}
}


