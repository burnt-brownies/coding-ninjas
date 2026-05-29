/* Given two values, n and r, write a function to calculate the permutation (nPr) for n ≥ r ≥ 0. The function should return -1 if n < r or if n or r are negative. The program should include two functions: one to calculate the factorial of a number and another to calculate the permutation. */

#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    int product = 1 ;

    if ( n == 0 ) return product ;
    
    for ( int i = 1 ; i <= n ; i++) {
        product = product * i ;
    }
    return product ;
}

int permutation(int n, int r) {

    if ( n < r || n <0 || r < 0) {
        return -1 ;
    }
    return factorial(n) / factorial(n-r) ;
}

int main() {
    int n, r;
    cin >> n;
    cin >> r;
    
    int result = permutation(n, r);
    
    if (result == -1) {
        cout << "Please enter n >= r >= 0" <<endl;
    } else {
        cout << result << endl;
    }
    
    return 0;
}

