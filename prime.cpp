#include <iostream>
using namespace std;

int main() {
    int num, i = 2;
    int isPrime = 1; 

    cin >> num;

    if (num <= 1) {
        isPrime = 0;  
    } else {
        while (i < num) {
            if (num % i == 0) {
                isPrime = 0;  // Set to 0 if num is divisible by i
            }
            i++;
        }
    }

    if (isPrime == 1) {
        cout << 1 << endl;  //
    } else {
        cout << 0 << endl;  
    }

    return 0;
}
