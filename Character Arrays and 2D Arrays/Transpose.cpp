/* You are given a matrix ‘MAT’. Print the transpose of the matrix. The transpose of a matrix is obtained by changing rows to columns and columns to rows. In other words, transpose of a matrix A[][] is obtained by changing A[i][j] to A[j][i]. */

#include<iostream>
using namespace std;

void transpose(int row,int col,int a[][1001]) {
    for ( int j = 0 ; j < col ; j ++){
        for ( int i =  0 ; i < row ; i ++){
            cout << a[i][j] << " ";
        }
        cout << endl ;
    }
    
}

int main(){
    int row,col;
    cin>>row>>col;
    int input[row][1001];

    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            
            cin>>input[i][j];
        }
    }
    transpose(row,col,input);
}