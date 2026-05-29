/* Given an integer ‘N’, your task is to write a program that returns all the divisors of ‘N’ in ascending order. */
#include <bits/stdc++.h>
using namespace std;

/* my part of code, rest was already given in the editor */

int* printDivisors(int n, int &size){
    int* ans = new int[n];
    size = 0;

    for (int i = 1 ; i*i <= n ; i++){
        if( n%i == 0){
            ans[size++] = i ;
            if(n/i != i){
                ans[size++] = n/i ;
            }
        }
    }
    std::sort(ans, ans+size);

    return ans;
}

/* took a bit of help, havent yet been introduced to pointers and how they work */

class Runner
{
    int t;
    int s[100001];

public:
    void takeInput()
    {
        t = 1;
        for (int i = 0; i < t; i++)
        {
            cin >> s[i];
        }
    }

    void execute()
    {
        for (int i = 0; i < t; i++)
        {
            int size;
            int* res = printDivisors(s[i], size);
            delete[] res; // Don't forget to delete!
        }
    }

    void executeAndPrintOutput()
    {
        for (int i = 0; i < t; i++)
        {
            int size;
            int* res = printDivisors(s[i], size);
            for (int j = 0; j < size; j++)
            {
                cout << res[j] << " ";
            }
            cout << endl;
            delete[] res; // Don't forget to delete!
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

