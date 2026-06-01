/* For a given two-dimensional integer array of size (N x M), print the array in a sine wave order, i.e, print the first column top to bottom, next column bottom to top and so on. */

#include <iostream>
using namespace std;

void wavePrint(int arr[][1001], int row, int col){
    for (int j = 0; j < col; j++) {
        if (j % 2 == 0) {
            // Even column, print top to bottom
            for (int i = 0; i < row; i++) {
                cout << arr[i][j] << " ";
            }
        } else {
            // Odd column, print bottom to top
            for (int i = row - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main()
{
	
		int row, col;
		cin >> row >> col;
		int input[row][1001];
		for (int i = 0; i < row; i++)
		{
			
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}
		wavePrint(input, row, col);
		cout << endl;
	
}