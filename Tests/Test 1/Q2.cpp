/* Print the following pattern for the given number of rows.
Pattern for N = 4
   1
  212
 32123
4321234
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Part 1: spaces
        for (int s = 0; s < n - i; s++) {
            cout << " ";
        }
        // Part 2: i down to 1
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        // Part 3: 2 up to i
        for (int j = 2; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}

/* N - i spaces
Numbers going down from i to 1
Numbers going up from 2 to i */