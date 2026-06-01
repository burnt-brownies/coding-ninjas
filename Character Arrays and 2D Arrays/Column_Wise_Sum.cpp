/* Given a 2D integer array of size M*N, find and print the sum of ith column elements separated by space. */

#include<iostream>
using namespace std;

int main(){
	int m , n, number, sum;
	cin >> m >> n ;

	int arr[m][n] ;

	for ( int i = 0 ; i < m ; i++) {
		for ( int j = 0 ; j < n ; j++) {
			cin >> number ;
			arr[i][j] = number ;
		}
	}

    // fix column no and vary row
	for ( int j = 0 ; j < n ; j++) {
		int sum = 0 ;
		for ( int i = 0 ; i < m ; i++) {
			sum += arr[i][j] ;
		}
		cout << sum << " " ;
	}
}