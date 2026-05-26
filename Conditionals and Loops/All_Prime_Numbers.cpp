/*
Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.
*/

/* method - 1 */
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++) {
        bool isPrime = true;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << endl;
        }
    }
}

/* method - 2 , new method i learnt, kinda fun, did use it in some prev problem but in a different way */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 2) {
        cout << "No prime numbers in range." << endl;
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        bool isPrime = true;

        for (int j = 2; j <= sqrt(i); j++) {  // only check up to sqrt(i)
            if (i % j == 0) {
                isPrime = false;
                break;  // no need to check further
            }
        }

        if (isPrime) {
            cout << i << endl;
        }
    }
}

/* if i has a factor lager than its square root, it must also have one smaller than it, eg i = 36, 2x18, 3x12, 4x9, 6x6, once we pass 6 its kinda repeating and we are seeing same pairs again and again, saves a lot of iteration for large N */
