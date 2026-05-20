/* You are given an positive integer n. You have to check whether a number is perfect or not.

A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. For instance, 6 has divisors 1, 2 and 3 (excluding itself), and 1 + 2 + 3 = 6, so 6 is a perfect number. Try to use do while loop for completing the task.

*/

/* method 1 - driect */

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, sum ;
	cin >> n ;
	sum = 0 ;

	for ( int i = 1 ; i < n ; i ++) {
		if ( n % i == 0) {
			sum = sum + i ;
		}
	}

	(sum == n) ? cout << n << " is a perfect number" : cout << n << " is not a perfect number" ;
}

/* method 2 - slightly different approach */

#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;

    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            sum += i;                    
            if(i != 1 && i != n/i)      
                sum += n/i;             
        }
    }

    (sum == n) ? cout << n << " is a perfect number" 
               : cout << n << " is not a perfect number";

    return 0;
}

/* in this approach we can do pairwise, every divisor has a partner, for eg 
n = 28, loop will run for root(28) = 5.something i.e. 1,2,3,4,5 
i = 2 is a divisor hence it will be added in sum 
its partner -> 28/2 = 34 will also be a divisor hence that will also simultaneosly be added in sum
for i = 1 its partner will be skipped as in perfect numbers we dont add the number itself
if number is a perfect square for eg 36, 6 is a divisor but its partner will also be 6 so we dont want to add it twice, hence the other condition in the nested if loop

this approach is kinda better than the method 1 as for small numbers like your problem not much difference but for bigger numbers method 1 loop would time out and this one wouldnt */