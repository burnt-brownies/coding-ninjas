/* You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array. */

#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size) {
    // i < size - 1 handles both odd sized and even sized array case, as in even sized we need to stop at the last element, if we swap that, it will swap with some garbage value
    for (int i = 0; i < size - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

int main()
{
	
		int size;
		cin >> size;
		int arr[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		swapAlternate(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	
}

