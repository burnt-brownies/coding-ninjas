/* Ninja has been given a binary string ‘STR’ containing either ‘0’ or ‘1’. A binary string is called beautiful if it contains alternating 0s and 1s.

For Example:‘0101’, ‘1010’, ‘101’, ‘010’ are beautiful strings.

He wants to make ‘STR’ beautiful by performing some operations on it. In one operation, Ninja can convert ‘0’ into ‘1’ or vice versa.

Your task is to determine the minimum number of operations Ninja should perform to make ‘STR’ beautiful.

For Example :
Minimum operations to make ‘STR’ ‘0010’ beautiful is ‘1’. In one operation, we can convert ‘0’ at index ‘0’ (0-based indexing) to ‘1’. The ‘STR’ now becomes ‘1010’ which is a beautiful string.  */

#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

// method - 1

int makeBeautiful(string str) {
	// Pattern 1 - even index = 0 , odd index = 1 (0101)
    // Pattern 2 - even index = 1 , odd index = 0 (1010)

    int count1 = 0 ; // for pattern1
    int count2 = 0 ; // for pattern2

    // Pattern 1

    for ( int i = 0 ; i < str.size() ; i++) {
        if (i % 2 == 0) {
            if ( str[i] != '0') count1++ ;
        } else {
            if ( str[i] != '1') count1++ ;
        }
    }

    // Pattern 2

    for ( int i = 0 ; i < str.size() ; i++) {
        if (i % 2 == 0) {
            if ( str[i] != '1') count2++ ;
        } else {
            if ( str[i] != '0') count2++ ;
        }
    }

    return min(count1 , count2) ;
}

// method - 2

int makeBeautiful(string str) {
    int count1 = 0;  // mismatches for pattern 0101

    for (int i = 0; i < str.size(); i++) {
        if (str[i] - '0' != i % 2) {  // expected digit is just i%2 for pattern1!
            count1++;
        }
    }

    // pattern2 mismatches = n - count1 (they always add up to n)
    return min(count1, (int)str.size() - count1);
}

/* Pattern1:  0 1 0 1 0 1
index:        0 1 2 3 4 5
i % 2:        0 1 0 1 0 1    exactly matches pattern1! 

STR      =  0 0 1 0
Pattern1 =  0 1 0 1   2 mismatches
Pattern2 =  1 0 1 0   2 mismatches

Actually:
Every position is EITHER a mismatch for p1 OR p2, never both, never neither.
So count1 + count2 = n always.
count2 = n - count1 */

class Runner
{
    int t;
    vector<string> str;

public:
    void takeInput()
    {
        cin >> t;
        for (int c = 0; c < t; c++)
        {
            string temp;
            cin >> temp;
            str.push_back(temp);
        }
    }

    void execute()
    {
        vector<string> strCopy = str;
        for (int i = 0; i < t; i++)
        {
            int ans = makeBeautiful(strCopy[i]);
        }
    }

    void executeAndPrintOutput()
    {
        for (int i = 0; i < t; i++)
        {
            int ans = makeBeautiful(str[i]);
            cout << ans << "\n";
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