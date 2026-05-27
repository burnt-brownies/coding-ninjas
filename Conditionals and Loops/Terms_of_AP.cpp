/*
Write a program to print the first x terms of the mathematical series 3N + 2 which are not multiples of 4.
The series is defined as:
T(N) = 3N + 2, where N is a positive integer starting from 1. Your task is to print the first x terms of this series, but you should exclude any term that is a multiple of 4.
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0, i = 1;
    while (count < n) {
        int T = 3 * i + 2;
        if (T % 4 != 0) {
            cout << T << " ";
            count++;
        }
        i++;
    }
}

/* 
made a mistake multiple times, i have to print n VALID terms not just n terms which included excluded ones, hance intialised a count variable 
*/