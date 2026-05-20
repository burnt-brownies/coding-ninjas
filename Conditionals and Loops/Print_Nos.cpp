/* Write a program that accepts a sequence of natural numbers from the user and prints each number to the console. The program should stop accepting numbers and terminate when the user enters the number 50. However, if the user enters the number 15, the program should not print that number but continue accepting more numbers. The program should make use of the break and continue statements in its implementation.

Note:
1. The program should handle any sequence of natural numbers.
2. The program should correctly use the break statement to terminate the input sequence when the number 50 is entered.
3. The program should correctly use the continue statement to skip the number 15 and also skip the number that is negartive as well and continue with the next number in the sequence.
*/

#include<iostream>
using namespace std;

int main(){
    int n;

    while(true) {          
        cin >> n;
        if(n == 50){
            cout << n << " " ;
            break;
        }
        if(n == 15 || n < 0)  // skip 15 and negatives
            continue;
            
        cout << n << " ";
    }

    return 0;
}

/* logic- kinda took time to implement - keep going (while true) -> until 50 reached -> print 50 and break out from while loop -> if 15 encountered or any negative no encountered -> continue -> i.e. skip that iteration */