#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0;
    cout << "Enter a number: ";
    cin >> num;

   
    while (num > 0) {
        reversedNum = reversedNum * 10 + (num % 10); // Append the last digit to reversedNum
        num = num / 10; // Remove the last digit from num
    }

    cout << "Reversed Number: " << reversedNum << endl;

    return 0;
}
