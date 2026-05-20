/* Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.

Note : For this question, you can assume that 0 raised to the power of 0 is 1

*/

/* method 1*/

#include<iostream>
using namespace std;

int main() {
	int x , n, ans ;
	cin >> x >> n ;
	ans = 1 ;

	while ( n != 0) {
		ans = ans * x ;
		n-- ;
	}

	cout << ans ;
	
}

/* method 2 */

#include<iostream>
using namespace std;

int main(){
    int x, n;
    cin >> x >> n;
    
    int ans = 1;
    while(n > 0){
        if(n % 2 != 0)   // if power is odd
            ans *= x;
        x *= x;           // square the base
        n /= 2;           // halve the power
    }
    
    cout << ans;
    return 0;
}

/* 
START: x=3, n=8, ans=1

-iteration 1
n=8, even  -> skip ans *= x
x = 3×3 = 9
n = 8/2 = 4

-iteration 2
n=4, even  -> skip ans *= x
x = 9×9 = 81
n = 4/2 = 2

-iteration 3
n=2, even  -> skip ans *= x
x = 81×81 = 6561
n = 2/2 = 1

-iteration 4
n=1, odd   -> ans = 1×6561 = 6561
x = 6561×6561 (doesn't matter, loop ends)
n = 1/2 = 0

loop ends -> ans = 6561


why the odd check???
when n is odd you can't split perfectly -> 3^5 = 3^2 × 3^2 × 3 -> that extra leftover ×3 is what ans *= x handles.
*/