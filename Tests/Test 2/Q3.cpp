/* Given an integer array A of size n. Find and print all the leaders present in the input array. An array element A[i] is called Leader, if all the elements following it (i.e. present at its right) are less than or equal to A[i].

Print all the leader elements separated by space and in the same order they are present in the input array. */

#include<bits/stdc++.h>
#include<climits>
using namespace std;

void Leaders(int a[],int n){
	for ( int i = 0 ; i < n ; i ++){
		bool leader = true ;
		for ( int j = i + 1 ; j < n ; j++){
			if(a[i] < a[j]){
				leader = false;
				break;
			}
		}

		if(leader == true){
			cout << a[i] <<" ";
		}
	}
}

/* can also go from right to left and rightmost element is always a leader */
/* in above solution - inner loop for j start at i = 1 , but j < n , immediately false, therefore, isleader - true, for last element, hence that case is handelled here perfectly */

int main()
{
    int len;
    cin>>len;
	int arr[len];
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	Leaders(arr,len);
}