/* iven three positive integers as X, Y and Z representing three sides of a triangle, write a program that determines whether the triangle formed by the sides exist or not. If the triangle exists, classify it as isosceles, scalene or equilateral.



Condition for Triangle to exist:
Sum of any two of its sides should be greater than the third side */

#include<iostream>
using namespace std;

int main() {
	int X, Y, Z;
	cin >> X >> Y >> Z ;

	if( (X+Y) <= Z || (Y+Z) <= X || (Z+X) <= Y)
	{
		cout << "Not a Triangle" ;
	}
	else if( X==Y && Y==Z )
	{
		cout << "Equilateral Triangle" ;
	}
	else if( X==Y || Y==Z || Z==X ){
		cout << "Isosceles Triangle" ;
	}
	
	else
	{
		cout << "Scalene Triangle" ;
	}
	return 0;
	
}