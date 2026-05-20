/* Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.

Hint : Use type casting */

#include<iostream>
using namespace std;


int main(){
	int start, end, step ;
	cin >> start >> end >> step ;

	for ( int farenheit = start ; farenheit <= end ; farenheit = farenheit + step) {
		int celcius = (farenheit - 32) * 5 / 9 ;
		cout << farenheit << " " << celcius << endl ;
	}
  
}