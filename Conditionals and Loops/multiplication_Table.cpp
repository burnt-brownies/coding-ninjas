/* The program should take an integer as input and print the first 10 multiples of the input integer. Each multiple should be printed on a new line. The program should not print anything else. The program should handle the case where the input integer is 0. In this case, the program should print ten lines of 0. The program does not need to handle invalid input. It can assume that the input will always be a valid integer within the specified constraints.
*/

#include<iostream>
using namespace std;

int main() {
	int n ;
	cin >> n ;

	for ( int i = 1 ; i <= 10 ; i++ ) {
		cout << n * i << endl ;
	}
	
}

/* learnt for loop */