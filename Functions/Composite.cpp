/* Your task is to write a function named print_composite that prints if there are any composite numbers up to a given number, n.
Composite numbers are positive integers greater than 1 that have more than two positive divisors. In other words, a composite number has factors other than 1 and itself. */

#include <bits/stdc++.h>
using namespace std;

bool print_composite(int n) {
    if (n <= 2) return false;

    for (int j = 2; j < n; j++) {
        if (n % j == 0) return true;  // n itself is composite
    }
    return false;
}

int main()
{
    
    int n;
    cin>>n;
    
    for(int i=2; i <= n; i++){
        if(print_composite(i))
            cout<<i<<endl;
    }
 
    return 0;
}