#include <iostream>
using namespace std;

int main() {
    int n;  // Number of terms in the Fibonacci series
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input" << endl;
        return 0;
    }

    int a = 0, b = 1;  // Starting values of the Fibonacci series
    int count = 0;
 int next;
    while (count < n) {
        cout << a << " ";
         next = a + b; //1
        a = b; // 1
        b = next; // 1
        count++;
    }

    cout << endl;
    return 0;
}
