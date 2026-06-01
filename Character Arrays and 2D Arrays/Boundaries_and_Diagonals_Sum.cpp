/* For a given two-dimensional square matrix of size (N x N). Find the total sum of elements on both the diagonals and at all the four boundaries. */

#include <iostream>
using namespace std;

// SO FUN OMG SO DIFFERENT 
int totalSum(int matrix[][501], int N){
    int total = 0;
    bool counted[100][100] = {false};  // Mark elements we've already included

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            bool isBoundary = (i == 0 || i == N - 1 || j == 0 || j == N - 1);
            bool isMainDiagonal = (i == j);
            bool isSecondaryDiagonal = (i + j == N - 1);

            if ((isBoundary || isMainDiagonal || isSecondaryDiagonal) && !counted[i][j]) {
                total += matrix[i][j];
                counted[i][j] = true;
            }
        }
    }

    return total;
}

int main()
{
	
		int n;
		cin >> n;
		int arr[501][501];

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> arr[i][j];
			}
		}
        
        cout << totalSum(arr, n) << endl; 
	
}