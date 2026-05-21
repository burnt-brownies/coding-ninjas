/*
Print the following pattern for the given number of rows.
Note: N is always odd.

Pattern for N = 5 
  *
 ***
*****
 ***
  *
  
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int mid = n / 2;
    for(int row = 1; row <= mid + 1; row++){
        for(int s = 1; s <= mid + 1 - row; s++)
            cout << " ";
        for(int col = 1; col <= 2*row - 1; col++)
            cout << "*";
        cout << "\n";
    }

    for(int row = 1; row <= mid; row++){
        for(int s = 1; s <= row; s++)
            cout << " ";
        for(int col = 1; col <= n - 2*row; col++)
            cout << "*";
        cout << "\n";
    }
}