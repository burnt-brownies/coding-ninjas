/* ALSO A VERY FUN QUETSION!! */

/* You have been given a random integer array/list(ARR) of size N. You are required to find and return the second largest element present in the array/list. */

#include <iostream>
#include<climits>
using namespace std;

int findSecondLargest(int arr[], int n){
	int largest = INT_MIN ;
	int second = INT_MIN ;

	for ( int i = 0 ; i < n ; i++) {
		if ( arr[i] > largest){
			second = largest ;
			largest = arr[i] ;
		} else if (arr[i] < largest && arr[i] > second) {
			second = arr[i] ;
		}
	}
	return second;
}

/* i kept track of two variables
largest = smallest possible
second = smallest possible

for each element:
    if element > largest:
        second = largest  (old largest becomes second)
        largest = element
    else if element > secondand element != largest:
        second = element*/

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = findSecondLargest(arr, n);
    cout<<ans;
    return 0;
}



