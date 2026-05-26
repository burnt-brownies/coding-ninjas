/* 
Write a program to find the Nth Fibonacci number using loops.

Note :
The Fibonacci series is a sequence of numbers in which each number is the sum of the two preceding ones, usually starting with first_number  and Second_number . 
First_number and Second_number in this question will be 1 . Soo that the resultant series will be 1, 1, 2, 3, 5, 8 ...
*/

/* mehtod - 1 */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int f1 = 1, f2 = 1, f3 = 0;

    if (n == 1 || n == 2) {
        cout << 1;
    } else {
        for (int a = 3; a <= n; a++) {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        cout << f3;
    }
}

/* method - 2 -> eliminating special cases entirely by intialisind f1 = 0 and f2 = 1, will work cleanly for all n >= 1, with no if else, and for n = 1 the loop doesnt run and f2 = 1 printed dircetly */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int f1 = 0, f2 = 1, f3;

    for (int a = 1; a < n; a++) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }

    cout << f2;
}