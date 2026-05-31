/* You are given an array of integers 'ARR' containing N elements. Each integer is in the range [1, N-1], with exactly one element repeated in the array. Your task is to find the duplicate element. The duplicate element may be repeated more than twice in the error, but there will be exactly one element that is repeated in the array.*/

#include<iostream>
using namespace std;

int findDuplicate(int arr[], int n){
	int count[n] = {0} ;

	for ( int i = 0 ; i < n ; i++) {
		count[arr[i]]++ ;
		if ( count[arr[i]] > 1) return arr[i] ;
	}
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = findDuplicate(arr, n);
    cout<<ans;
    return 0;
}
