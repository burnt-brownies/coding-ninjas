/*
Given a binary number as an integer N, convert it into decimal and print.
*/

/* mehtod - 1 ( this was what i did)*/ 

#include<iostream>
using namespace std;

int main() {
    int n ; 
    cin >> n ;

    int multiplier = 1 ;
    int decimal = 0 ;

    while ( n != 0) {
        int rem = n % 10 ;
        decimal = (rem*multiplier) + decimal ;
        multiplier = multiplier * 2 ;
        n = n / 10 ;
    }

    cout << decimal ;
}


/* method - 2 , learnt about a string based approach, tbh seemed much more simpler and better for larger binary numbers which may get a larger multiplier, pretty cool approach tho will keep in mind */

#include<iostream>
#include<string>
using namespace std;

int main() {
    string n;
    cin >> n;

    long long decimal = 0;
    long long multiplier = 1;

    for (int i = n.length() - 1; i >= 0; i--) {
        if (n[i] == '1')
            decimal += multiplier;
        multiplier *= 2;
    }

    cout << decimal;
}

