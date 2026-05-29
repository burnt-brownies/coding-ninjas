/* some codes are similar to what i've solved before, starting to learn functions here */

/* 
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.

Note: You don't have to write the main function or take input. It has already been taken care of and you need to just print the integer value . Just write the code that prints Fahrenheit to Celsius table in the function itself.
Formula is C = (F - 32) * 5/9
*/

#include<iostream>
using namespace std;

void printTable(int start, int end, int step) {
    while ( start <= end) {
        int C = (start - 32) * 5/9 ;
        cout << start << " " << C << endl ;
        start = start + step ;
    }
}

int main(){
    int start, end, step;
    cin >> start >> end >> step;
  
    printTable(start, end, step);

}
