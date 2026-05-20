/* 1. If the input is 1, then 2 integers are taken from the user and their sum is printed.
2. If the input is 2, then 2 integers are taken from the user and their difference(1st number - 2nd number) is printed.
3. If the input is 3, then 2 integers are taken from the user and their product is printed.
4. If the input is 4, then 2 integers are taken from the user and the quotient obtained (on dividing 1st number by 2nd number) is printed.
5. If the input is 5, then 2 integers are taken from the user and their remainder(1st number mod 2nd number) is printed.
6. If the input is 6, then the program exits.
7. For any other input, then print "Invalid Operation". */

#include<bits/stdc++.h>
using namespace std;

int main() {
	int task , n1, n2;
	cin >> task ;

	while ( task != 6 ) {
		switch (task) {

			case 1 :
			cin >> n1 >> n2 ;
			cout << n1 + n2 << endl ;
			break ;

			case 2 :
			cin >> n1 >> n2 ;
			cout << n1 - n2 << endl ;
			break ;

			case 3 :
			cin >> n1 >> n2 ;
			cout << n1 * n2 << endl ;
			break ;

			case 4 :
			cin >> n1 >> n2 ;
			cout << n1 / n2 << endl ;
			break ;

			case 5 :
			cin >> n1 >> n2 ;
			cout << n1 % n2 << endl ;
			break ;

			default :
			cout << "Invalid Operation" << endl ;
		}
		cin >> task ;
	}
	
	return 0 ;

}

/* learnt about switch case and how to inculcate it in while loop */