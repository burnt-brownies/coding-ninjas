/* Given three positive integers as X, Y and Z representing three sides of a triangle, write a program that determines whether the triangle formed by the sides exist or not. If the triangle exists, classify it as isosceles, scalene or equilateral.



Condition for Triangle to exist:
Sum of any two of its sides should be greater than the third side */

#include<iostream>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    if ((X + Y) <= Z || (Y + Z) <= X || (Z + X) <= Y) {
        cout << "Not a Triangle\n";
        return 0;
    }

    if (X == Y && Y == Z)
        cout << "Equilateral Triangle\n";
    else if (X == Y || Y == Z || Z == X)
        cout << "Isosceles Triangle\n";
    else
        cout << "Scalene Triangle\n";

    return 0;
}

/* First checking if valid tirangle or not, if invalid returning asap and not going throught the other if else conditions, then if valid triangle checking the if else conditions, first equilateral condition, if did isoscleles condition firs, it triggers even if it is an equilateral triangle */