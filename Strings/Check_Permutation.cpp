/* You have been given two strings 'STR1' and 'STR2'. You have to check whether the two strings are anagram to each other or not.
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <bits/stdc++.h> 
using namespace std;

// method - 1

bool areAnagram(string &str1, string &str2){

    if (str1.size() != str2.size()) return false ;

    sort(str1.begin() , str1.end());
    sort(str2.begin() , str2.end());

    return str1 == str2 ;
}

// method - 2 - frequency approach 

bool areAnagram(string &str1, string &str2) {
    if (str1.size() != str2.size()) return false;

    int freq[26] = {0};  // for a-z

    for (int i = 0; i < str1.size(); i++) {
        freq[str1[i] - 'a']++;   // increment for str1
        freq[str2[i] - 'a']--;   // decrement for str2
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) return false;
    }

    return true;
}

/* str1 = "listen"
str2 = "silent"

For each char in str1 - increment its slot
For each char in str2 - decrement its slot

If anagram, every char appears same number of times, all increments cancel out with decrements, all freq[i] = 0  

If NOT anagram, some slot will be nonzero  */

class Runner
{
    int t;
    vector<vector<string> > arr;

public:
    void takeInput()
    {
        cin >> t;

        for (int c = 0; c < t; c++)
        {
            vector<string> temp(2);
            for(int i=0;i<2;i++)
                cin>>temp[i];
                arr.push_back(temp);
        }

    }


    void execute()
    {
        vector<vector<string> > arrCopy = arr;
        for (int i = 0; i < t; i++)
        {
            areAnagram(arrCopy[i][0], arrCopy[i][1]);
        }
    }

    void executeAndPrintOutput()
    {
        for (int i = 0; i < t; i++)
        {
            cout<<areAnagram(arr[i][0], arr[i][1])<<endl;
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

