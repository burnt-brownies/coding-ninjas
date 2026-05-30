/* Write a program that returns minimum element in an array. */

#include<iostream>
using namespace std;

int main() {
	int min , n ;

	cin >> n ;
	int a[n] ;

	for ( int i = 0 ; i < n ; i ++) {
		cin >> a[i] ;
	}

	min = a[0] ;
    // started from i = 1 and i = 0 already checked
	for ( int i = 1 ; i < n ; i++) { 
		if ( min > a[i]){
			min = a[i] ;
		}
	}
	cout << min ;
}
