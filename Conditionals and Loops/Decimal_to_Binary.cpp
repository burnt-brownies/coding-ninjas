/*
Given a decimal number (integer N), convert it into binary and print.
*/

#include<iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    int bits[64];
    int idx = 0;

    while (n != 0) {
        bits[idx] = n % 2;
        idx++;
        n = n / 2;
    }

    // print in reverse MSB to LSB
    for (int i = idx - 1; i >= 0; i--) {
        cout << bits[i];
    }
}