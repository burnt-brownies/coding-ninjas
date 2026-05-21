/*
Print the following pattern

Pattern for N = 4
   *
  ***
 *****
*******

*/

#include<iostream>
using namespace std;


int main(){
	int n ;
	cin >> n ;

	for ( int row = 1 ; row <= n ; row++) {
		for (int s = 1 ; s <= n - row ; s++) {
			cout << " " ;
		}
		for (int col = 1 ; col <= 2*row - 1 ; col++) {
			cout << "*" ;
		}
		cout << "\n" ;
	}
}