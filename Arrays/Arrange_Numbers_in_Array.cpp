/* You have been provided with an empty array (ARR) and its size N. The user will only input the value of N, and you don't need to be concerned about the array itself. Your objective is to fill the array using integer values from 1 to N (inclusive), following the specific order: 1, 3, 5, ..., 6, 4, 2.*/

#include <iostream>
using namespace std;

void arrange(int arr[], int n) {
    int counter = 1;
    for (int i = 0; i < n/2; i++) {
        arr[i] = counter++; // first fill counter, then increment, *new learning :)*, where to actually use it 
        arr[n-i-1] = counter++;
    }
    if (n % 2 != 0) {
        arr[n/2] = counter;  // fill middle element
    }
}

int main()
{
	
		int n;
		cin >> n;

		int arr[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;

	
}

