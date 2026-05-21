/*
Print the following pattern for the given N number of rows.

Pattern for N = 4
***1
**12
*123
1234

The dots represent spaces.
*/

#include<iostream>
using namespace std;


int main() {
	int n ;
	cin >> n ;

	for ( int row = 1 ; row <= n ; row++) {
		for(int s = 1; s <= n - row; s++){
            cout << " ";
        }
		for(int col = 1; col <= row; col++){
            cout << col;
        }
		cout << "\n" ;
	}
}

