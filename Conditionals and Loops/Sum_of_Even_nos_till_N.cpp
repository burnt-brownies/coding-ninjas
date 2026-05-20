/* Given a number N, print sum of all even numbers from 1 to N.*/

#include<iostream>
using namespace std;


int main(){
	int n, sum ;
	cin >> n ;
	sum = 0 ;

	for ( int i = 2 ; i <= n ; i = i+2) {
		sum = sum + i ;
	}
	
	cout << sum ;
  
}