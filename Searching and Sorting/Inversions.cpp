/* You have a list of numbers that are not in order. You want to find the sum of the differences between the indices of pairs of numbers that are in the wrong order. A pair of numbers is considered to be in the wrong order if the smaller number comes after the larger number in the list.

Example:
Input: ‘N’ = 5 
‘A’ = [3, 2, 11, 5, 1]
Output: 6

When we apply selection sort, first swap will happen between array[0] to array[4], inversion will be (index of arrar[4]-index of array[0]) = 4-0=4 and the array after this will be [1, 2, 11, 5, 3], still the array is not sorted. So we will apply selection sort again, the swap will now take place between array[2] and array[4], inversion will be 4+(index of arrar[4]-index of array[2])=4+(4-2)=4+2=6.So the final sorted array now will be [1,2,3,5,11] */

#include<iostream>
using namespace std;

int getInversions(int arr[], int n){
	int sum = 0 ;

	for ( int i = 0 ; i < n - 1 ; i++) {
		int min = arr[i] ;
		int minIndex = i ;
		for ( int j = i + 1 ; j < n ; j++) {
            // finding min index and min number
			if (arr[j] < min){
				minIndex = j ;
				min = arr[j] ; 
			} 
		}
        // we add in sum only if we swap was required, and swap only required when minIndex is not equal to i 
		if (minIndex != i) {
			sum = sum + (minIndex - i) ;
			int temp = arr[i] ;
			arr[i] = arr[minIndex] ;
			arr[minIndex] = temp ;
		}
	}
	return sum ;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
	    cin>>arr[i];
    }
    int ans = getInversions(arr, n);
    cout << ans << endl;
    return 0;
}

