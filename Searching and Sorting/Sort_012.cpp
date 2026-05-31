/* VERY FUN QUESTION TO LEARN!! */

/* You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s. Write a solution to sort this array/list in a 'single scan'. 'Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once. */

#include<iostream>
using namespace std;

void sort012(int arr[], int n) {
    int low = 0;
    int mid = 0;       
    int high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            int temp = arr[low];
            arr[low] = arr[mid];  
            arr[mid] = temp;
            low++;
            mid++; // we swapped with a low element, the left side, i.e. the low side is already processed hence will have low values only, hence no need to check mid and can move mid forward
        } else if (arr[mid] == 2) {
            int temp = arr[high];
            arr[high] = arr[mid];  
            arr[mid] = temp;
            high--;
            // here no mid++ as after swapping we will have to check mid again, we swapped with comething from the right side, which is not gauranteed to be in the right place when swapped
        } else {
            mid++;  
        }
    }
}

/*
low=0, mid=0, high=6
[2, 0, 2, 1, 0, 1, 2]
 ↑                 ↑
low,mid           high

Step 1: arr[mid]=2 → swap with high, high--
[2, 0, 2, 1, 0, 1, 2]
 swap arr[0] and arr[6]
[2, 0, 2, 1, 0, 1, 2]  (both are 2, looks same)
high-- → high=5
NO mid++ because arr[6] was UNKNOWN!

low=0, mid=0, high=5
[2, 0, 2, 1, 0, 1, 2]
 ↑              ↑
low,mid        high

Step 2: arr[mid]=2 → swap with high, high--
swap arr[0] and arr[5]
[1, 0, 2, 1, 0, 2, 2]
high-- → high=4
NO mid++ because arr[5] was UNKNOWN!
↑ see! arr[5] was 1, now sitting at mid=0, needs checking!

low=0, mid=0, high=4
[1, 0, 2, 1, 0, 2, 2]
 ↑           ↑
low,mid     high

Step 3: arr[mid]=1 → just mid++
1 is in correct place, just move forward

low=0, mid=1, high=4
[1, 0, 2, 1, 0, 2, 2]
 ↑  ↑        ↑
low mid     high

Step 4: arr[mid]=0 → swap with low, low++, mid++
swap arr[1] and arr[0]
[0, 1, 2, 1, 0, 2, 2]
low++ → low=1
mid++ → mid=2
arr[0] came FROM low side → already checked → safe to mid++!

low=1, mid=2, high=4
[0, 1, 2, 1, 0, 2, 2]
    ↑  ↑     ↑
   low mid  high

Step 5: arr[mid]=2 → swap with high, high--
swap arr[2] and arr[4]
[0, 1, 0, 1, 2, 2, 2]
high-- → high=3
NO mid++ because arr[4] was UNKNOWN!
↑ arr[4] was 0, now at mid=2, needs checking!

low=1, mid=2, high=3
[0, 1, 0, 1, 2, 2, 2]
    ↑  ↑  ↑
   low mid high

Step 6: arr[mid]=0 → swap with low, low++, mid++
swap arr[2] and arr[1]
[0, 0, 1, 1, 2, 2, 2]
low++ → low=2
mid++ → mid=3

low=2, mid=3, high=3
[0, 0, 1, 1, 2, 2, 2]
       ↑  ↑
      low mid,high

Step 7: arr[mid]=1 → just mid++
mid++ → mid=4

mid(4) > high(3) → LOOP ENDS 

Final result:
[0, 0, 1, 1, 2, 2, 2] 

*/

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;

		cin >> size;
		int arr[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

	
		cout << endl;
	}

	return 0;
}

