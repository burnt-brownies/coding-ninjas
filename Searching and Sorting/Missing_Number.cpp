/*  You have been given an array/list. Your task in to return the missing number. Array contains the distinct element form (0,N), both are inclusive. Missing number is the number that is not present in the array.

Input: ‘N’ = 4 
‘A’ = [3, 1, 0, 4]

Output: 2*/


#include<iostream>
using namespace std;

/* first thought about sorting the array and them comparing adjacent numbers, but that felt like a very gruesome task for an array to go through haha, then applied the math formula and did it */

int missingNumber(int arr[], int n){
	long long int sum = 0 ;
	sum = (n * (n+1)) / 2 ;

	long long int arrSum = 0 ;
	for ( int i = 0 ; i < n ; i++) {
		arrSum += arr[i] ;
	}

	return sum - arrSum ;
}

/* method - 2 i found when i searched it up, XOR !!!!!!
cancels out duplicates, only the non duplicate remains, XOR all number 0 to N then XOR the array then XOR those 2 values, the on which remains is the number */

int missingNumber(int arr[], int n) {
    int xorFull = 0;
    int xorArr = 0;

    for (int i = 0; i <= n; i++)
        xorFull ^= i;
		
    for (int i = 0; i < n; i++)
        xorArr ^= arr[i];

    return xorFull ^ xorArr;
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
    int ans = missingNumber(arr, n);
    cout<<ans;
    return 0;
}