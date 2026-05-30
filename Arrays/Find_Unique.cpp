/* You have been given an integer array(ARR) of size N. Now, in the given array, all numbers are present twice or more than twice except only one number is present only once. You need to find and return that number which is unique in the array. */

#include <iostream>
using namespace std;

// learnt something new, whenever we have a find unique/remove duplicates question, use XOR, XOR very beautifully cancels out duplicates and only the unigue number remains
int findUnique(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++)
        result = result ^ arr[i];
    return result;
}

int main()
{

	
		int size;
		cin >> size;
		int input[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		cout << findUnique(input, size) << endl;
	

	return 0;
}