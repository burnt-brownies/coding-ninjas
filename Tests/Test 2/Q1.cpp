/* Given a 2D integer array with n rows and m columns. Print the 0th row from input n times, 1st row n-1 times…..(n-1)th row will be printed 1 time. */

#include <iostream>
using namespace std;

void print2DArray(int a[][1000], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int times = 0; times < row - i; times++) {
            for (int j = 0; j < col; j++) {
                cout << a[i][j];
                if (j < col - 1) cout << " "; // to print spaces between numbers but not after the last number
            }
            cout << endl;
        }
    }
}

int main() {
    int row, col;
    cin >> row >> col;

    int input[row][1000];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>input[i][j];
        }
    }
    print2DArray(input, row, col);
}
