/* For Array A of size n, the prefix sum of A is another array P of size n+1, where P[i] represents the sum of the first i elements of A. That is,

P[0] = A[0]
P[1] = A[0] + A[1]
P[2] = A[0] + A[1] + A[2]
...
P[n-1] = A[0] + A[1] + ... + A[n-1] */

#include<iostream>
using namespace std;

void prefixSum(int arr[],int n,int output[]){
    output[0] = arr[0] ;
    for ( int i = 1 ; i < n ; i++){
        output[i] = output[i-1] + arr[i];
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int output[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    prefixSum(arr,n,output);
    for(int i = 0;i<n;i++){
        cout<<output[i]<<" ";
    }
}

