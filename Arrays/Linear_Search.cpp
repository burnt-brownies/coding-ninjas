/* You have been given a random integer array(ARR) of size N, and an integer 'val'. You need to search for the integer 'val' in the given array using 'Linear Search'.

 You have been required to return the index at which 'val' is present in the array. If 'val' has multiple occurrences in the array, then you need to return the index at which the first occurrence of 'val' would be encountered. In case 'val' is not present in the array/list, then return -1. */

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int val){
    for ( int i = 0 ; i < n ; i++) {
        if ( arr[i] == val) return i ;
    }

    return -1 ;
}

int main()
{
	
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		int val;
		cin >> val;
		cout << linearSearch(arr, n, val) << endl;
	
	return 0;
}