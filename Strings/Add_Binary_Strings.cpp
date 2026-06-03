/* VERY FUN QUESTION */

/* ou have been given two binary strings ‘A’ and ‘B’. Your task is to find the sum of both strings in the form of a binary string. */

#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>   
using namespace std;

string addBinaryString(string &a, string &b, int n, int m) {
    string result = "";
    int i = n - 1;  // LSB of a
    int j = m - 1;  // LSB of b
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0) {
            sum += (a[i] - '0');  // convert char to int as a[i] gives char and we want to perform operations on int, if we do in char, we'll be doing on ascii value of char
            i--;
        }
        if (j >= 0) {
            sum += (b[j] - '0');
            j--;
        }

        carry = sum / 2;          // 0 or 1
        result += (sum % 2 + '0'); // convert int back to char and then append to the end, if we directly add, it will be integer addition and it will give wrong value
    }

    reverse(result.begin(), result.end());  // we need to reverse as we processed it from right to left 
    return result;
}

class Runner
{
    int t;
    vector<pair<string, string>> binaryString;
    vector<pair<int, int>> stringLength;

public:
    void takeInput()
    {
        cin >> t;

        binaryString.resize(t);
        stringLength.resize(t);

        for (int l = 0; l < t; l++)
        {
            cin >> stringLength[l].first >> stringLength[l].second;

            cin >> binaryString[l].first >> binaryString[l].second;
        }
    }

    void execute()
    {
        for (int i = 0; i < t; i++)
        {
            string a = binaryString[i].first;
            string b = binaryString[i].second;
            int n = stringLength[i].first;
            int m = stringLength[i].second;

            addBinaryString(a, b, n, m);
        }
    }

    void executeAndPrintOutput()
    {
        for (int i = 0; i < t; i++)
        {
            string a = binaryString[i].first;
            string b = binaryString[i].second;
            int n = stringLength[i].first;
            int m = stringLength[i].second;

            cout << addBinaryString(a, b, n, m) << endl;
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