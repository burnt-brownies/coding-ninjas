/* Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately.

Digits mean numbers, not places! That is, if the given integer is "132456", even digits are 2, 4, and 6, and odd digits are 1, 3, and 5.*/

#include<iostream>
using namespace std;

int main() {
	int n , esum, osum, rem ;
	cin >> n ;

	esum = 0;
	osum = 0;

	while ( n != 0){
		rem = (n % 10);

		if ( rem % 2 == 0){
		    esum = esum + rem ;
		}
		else{
			osum = osum + rem;
		}
		n = n / 10;
	}

	cout << esum << " " << osum ;
	
}
