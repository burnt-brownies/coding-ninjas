/* You are given two numbers 'arr1' and 'arr2' in the form of two arrays (arr1[] and arr2[]) both of lengths 'N'. You have given a third array 'arr3' also with length 'N'. You have store the corresponding sum of elements from arr1 and arr2 in arr3 corresponding element. */

#include<iostream>
using namespace std;

void sumOfTwoArrays(int arr1[],int arr2[],int n,int arr3[]){
    for ( int i = 0 ; i < n ; i++){
        arr3[i] = arr1[i] + arr2[i];
    }
}

int main(){

    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    int arr3[n];
    
    for(int i = 0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i = 0;i<n;i++){
        cin>>arr2[i];
    }
    sumOfTwoArrays(arr1,arr2,n,arr3);
    for(int i = 0;i<n;i++){
        cout<<arr3[i]<<" ";
    }
    
    return 0;
}

