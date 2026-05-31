/* You are given an integer array 'arr' of size 'N'. You must sort this array using 'Bubble Sort'. */

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int n) {
	for ( int i = 0 ; i < n - 1 ; i++) {
        // stopping at j = n-i-2 because 2 elements we are comparing
		for ( int j = 0 ; j <= n - i - 2; j++) {
			if (arr[j] > arr[j+1]) {
				int temp = arr[j] ;
				arr[j] = arr[j+1] ;
				arr[j+1] = temp ;
			}
		}
	}
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}