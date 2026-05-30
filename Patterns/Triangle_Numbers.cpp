/* Print the following pattern for the given number of rows.

Pattern for N = 4 
   1
  232
 34543
4567654
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
		for(int col = row; col <= 2*row - 1; col++){
            cout << col;
        }
        for(int col = 2*row - 2; col >= row; col--){
            cout << col;
        }
        cout << "\n";
	}
}

