#include <iostream>
using namespace std;

int main() {
    int num, i = 1;
    int isPerfectSquare = 0;  // 0 represents false

    cin >> num;

    if (num >= 0) {
        while (i * i <= num) {
            if (i * i == num) {
                isPerfectSquare = 1;  // 1 represents true
            }
            i++;
        }
    }

    // Output the result
    if (isPerfectSquare == 1) {
        cout << 1 << endl;  // Print 1 for perfect square
    } else {
        cout << 0 << endl;  // Print 0 for non-perfect square
    }

    return 0;
}
