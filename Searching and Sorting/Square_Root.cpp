/* You are given a positive integer ‘N’. Your task is to find and return its square root. If ‘N’ is not a perfect square, then return the floor value of sqrt(N). */

#include <bits/stdc++.h>
using namespace std;

// method - 1 , standar one which i thought about

long long int floorSqrt(long long int n){
    long long int i = 0 ;

    while(i*i <= n) {
        i++ ;
    }

    return i-1;
}

// method - 2, searched up why it is in the sorting section, turns out we can use binary search

long long int floorSqrt(long long int n) {
    if (n == 0 || n == 1) return n;
    
    long long int left = 1, right = n/2;
    long long int ans = 1;
    
    while (left <= right) {
        long long int mid = left + (right - left) / 2;
        
        if (mid * mid == n) return mid;      // perfect square
        else if (mid * mid < n) {
            ans = mid;                        // store last valid
            left = mid + 1;                  // try bigger
        }
        else right = mid - 1;               // too big, go smaller
    }
    return ans;
}

/* example - wanna find sqrt of 6
left = 1, right = 3 , mid = 2
2*2 = 4 < 6
hence left = mid + 1 i.e. 3 
now left = right
hence from 
1 2 | 3, we need to return the floor value i.e. 2
hence ans = 2*/ 

class Runner
{
    int t = 1;

    vector<long long int> allN;

public:
    void takeInput()
    {
        // cin >> t;

        allN.resize(t);

        for (int i = 0; i < t; i++)
        {
            cin >> allN[i];
        }

        return;
    }

    void execute()
    {
        for (int i = 0; i < t; i++)
        {
            long long int copyN = allN[i];

            // Get the answer from scaffold/solution
            int result = floorSqrt(copyN);
        }
    }

    void executeAndPrintOutput()
    {
        for (int i = 0; i < t; i++)
        {
            int result = floorSqrt(allN[i]);
            cout << result ;
            cout << "\n";
        }
    }
};

int main()
{
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}

