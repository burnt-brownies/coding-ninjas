/* You are given an integer array 'A' of size 'N', sorted in ascending order. You are also given an integer 'target'. Your task is to write a function to search for 'target' in the array 'A'. If it exists, return its index in 0-based indexing. Otherwise, return -1. */

#include<iostream>
using namespace std;

int binarySearch(int nums[], int left, int right, int target) {
    while ( left <= right ){
        int mid = (left + right)/2;
        if ( nums[mid] == target){
            return mid ;
        }
        else if ( target < nums[mid]){
            right = mid - 1 ;
        }
        else {
            left = mid + 1 ;
        }
    }

    return -1 ;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int left = 0;
    int right =n-1;
    int target;
    cin>>target;


    int ans = binarySearch(arr, 0, n-1, target);


    cout<<ans;




    return 0;
}