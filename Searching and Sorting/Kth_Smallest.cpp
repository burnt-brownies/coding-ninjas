/* You have been given an array/list and a number k. You have to find the kth smallest number.

Example:
Input: ‘N’ = 5 , 'k' = 2
‘A’ = [3, 2, 11, 5, 1]

Output: 2 */

#include<iostream>
using namespace std;

int kthSmallest(int arr[], int n, int k){
    for(int j = 0; j < n - 1; j++) {
		for(int i = 0; i <= n - j - 2; i++) {
			if(arr[i] > arr[i+1]) {
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}

    return arr[k-1];
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int kth_smallest = kthSmallest(arr, n, k);
    cout << kth_smallest << endl;
    return 0;
}


