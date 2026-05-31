#include<iostream>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int current = arr[i];  // card we picked
        int j = i - 1;

        // shift elements right until correct position found
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];  // shift right
            j--;
        }

        arr[j + 1] = current;  // insert in correct position
    }
}

using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

/* 
i=1: current=2, j=0
     arr[0]=3 > 2 → shift → [3, 3, 11, 5, 1], j=-1
     insert at j+1=0 → [2, 3, 11, 5, 1]

i=2: current=11, j=1
     arr[1]=3 < 11 → stop
     insert at j+1=2 → [2, 3, 11, 5, 1] (no change)

i=3: current=5, j=2
     arr[2]=11 > 5 → shift → [2, 3, 11, 11, 1], j=1
     arr[1]=3  < 5 → stop
     insert at j+1=2 → [2, 3, 5, 11, 1]

i=4: current=1, j=3
     arr[3]=11 > 1 → shift, j=2
     arr[2]=5  > 1 → shift, j=1
     arr[1]=3  > 1 → shift, j=0
     arr[0]=2  > 1 → shift, j=-1
     insert at j+1=0 → [1, 2, 3, 5, 11] 

basically we keep shifting right unless the number isn't at its correct position
*/