/* You are given the array ‘children’ of size ‘N’ representing the number of candies present at each child. You have a ‘extraCandies’ amount of candies. Your task is to find for each child if the child has the most candies among all children if all ‘extraCandies’ are given to the child.

You have to fill the boolean array 'output' also of size 'N'. ‘True’ is present at position ‘index’ if the child at position ‘index’ will have the maximum amount of candies when given all the ‘extraCandies’ candies.

For example:
You are given ‘children’ = [12, 20, 5], and ‘extraCandies’ = ‘9’

If you give all the candies to the child at position 1, the child will have 21 candies, which is the highest among all children.

If you give all the candies to the child at position 2, the child will have 29 candies, which is the highest among all children.

If you give all the candies to the child at position 3, the child will have 14 candies, which is not the highest among all children.

Hence the answer is [True, True, False]. */

#include<iostream>
using namespace std;

// method 1 - what i did
void maximum_candy(int n, int arr[],int extraCandies,bool output[]){
    for ( int i = 0 ; i < n ; i++) {
        int max = extraCandies + arr[i] ;
        bool isMax = true ;
        for ( int j = 0 ; j < n ; j++) {
            if (arr[j] > max) isMax = false ;
        }
        output[i] = isMax ;
    }
}

// method 2 - slighty different one i searched up
void maximum_candy(int n, int arr[], int extraCandies, bool output[]) {
    // find max in array first
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > maxVal) maxVal = arr[i];

    // check each child
    for (int i = 0; i < n; i++)
        output[i] = (arr[i] + extraCandies >= maxVal);
}

int main(){
    int n,extraCandies;
    cin>>n>>extraCandies;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    bool output[n];
    
    maximum_candy(n,arr,extraCandies,output);

    for(int i = 0;i<n;i++){
        if(output[i]){
            cout<<"True ";
        }
        else{
            cout<<"False ";
        }
    }
}