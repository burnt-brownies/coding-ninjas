/* Print the following pattern for given number of rows.
Input format :

Line 1 : N (Total number of rows)

Sample Input :
   5
Sample Output :
1234554321
1234**4321
123****321
12******21
1********1 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Part 1: numbers 1 to N-i
        for (int j = 1; j <= n - i; j++) {
            cout << j;
        }

        // Part 2: middle (stars or N N for first row)
        if (i == 1) {
            cout << n << n;         // first row: print N twice
        } else {
            for (int s = 0; s < 2 * (i - 1); s++) {
                cout << "*";
            }
        }

        // Part 3: numbers N-i down to 1
        for (int j = n - i; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }
    return 0;
}

/* Numbers from 1 to N - i
Stars: 2 * (i-1) stars, except row 1 which prints N and N instead
Numbers from N - i down to 1 */