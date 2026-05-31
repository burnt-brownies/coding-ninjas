/* You have been given a sorted(in ascending order) integer array/list('nums') of size N and an element 'target'. Your task is to return the index of closest element to the 'target' in the array 'nums'.

Example:
Input: ‘N’ = 7 ‘target’ = 4
‘A’ = [1, 3, 7, 9, 11, 12, 45]

Output: 1

Explanation: For nums = [1, 3, 7, 9, 11, 12, 45],
The element 3 is closest to the target element , so we will return the index of 3.
Hence, the answer is '1'. */

#include<iostream>
using namespace std;

int binarySearchClosest(int arr[], int left, int right, int target) {
    while (left < right) {
        int mid = (left + right) / 2;
        
        if (target == arr[mid]) return mid;  
        else if (target > arr[mid]) left = mid + 1;  
        else right = mid;
    }
    
    if (left == 0) return 0;
    
    int diffLeft = target - arr[left - 1];
    int diffRight = arr[left] - target;
    
    return (diffLeft <= diffRight) ? left - 1 : left;
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
    int ans = binarySearchClosest(arr, 0, n-1, target);
    cout<<ans;
    return 0;
}

