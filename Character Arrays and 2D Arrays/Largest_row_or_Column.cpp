/* For a given two-dimensional integer array of size (N x M), you need to find out which row or column has the largest sum(sum of all the elements in a row/column) amongst all the rows and columns. Return the maximum sum. */

#include <iostream>
using namespace std;
#include<climits>

int findLargest(int arr[][1001], int m, int n){
    int max = 0 ;
    for ( int i = 0 ; i < m ; i ++){
        int sum = 0 ;
        for ( int j = 0 ; j < n ; j ++){
            sum += arr[i][j] ;
        }
        if ( sum > max){
            max = sum ;
        }
    }
    for ( int j = 0 ; j < n ; j ++){
        int sum = 0 ;
        for ( int i = 0 ; i < m ; i ++){
            sum += arr[i][j] ;
        }
        if ( sum > max){
            max = sum ;
        }
    }

    return max ;
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

		
		cout << findLargest(input, row, col)<<endl;
	
}