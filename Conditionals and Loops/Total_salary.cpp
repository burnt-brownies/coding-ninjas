/* Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), depending upon which the total salary is calculated as:

    Total_salary = Basic + HRA + DA + Allow – PF
where :
HRA   = 20% of basic
DA    = 50% of basic
Allow = 1700 if grade = ‘A’
Allow = 1500 if grade = ‘B’
Allow = 1300 if grade = ‘C' or any other character
PF    = 11% of basic.
Round off the total salary and then print the integral part only.*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int basic, allow ;
	float total, HRA, DA, PF;
	char grade ;

	cin >> basic >> grade ;

	HRA = 0.2 * basic ;
	DA = 0.5 * basic ;
	PF = 0.11 * basic ;

	if ( grade == 'A') {
		allow = 1700 ;
	} else if ( grade == 'B') {
		allow = 1500 ;
	} else {
		allow = 1300 ;
	}
	
	total = basic + HRA + DA + allow - PF ;
	int ans = round(total) ;
	cout << ans ;
}
