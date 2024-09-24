#include <iostream>
using namespace std;

int main()
{
    int num, count = 1;
    int max1, max2, max3;

    cout << "Enter integer 1: ";
    cin >> num;
    max1 = max2 = max3 = num;

    while (count != -1)
    {
        cout << "Enter integer : ";
        cin >> num;
        if (num > 0)
        {
            if (num > max1)
            {
                max3 = max2;
                max2 = max1;
                max1 = num;
            }
            else if (num > max2)
            {
                max3 = max2;
                max2 = num;
            }
            else if (num > max3)
            {
                max3 = num;
            }

            count++;
        }
        else
        {
            count = -1;
        }
    }

    // Output the 2nd and 3rd maximum values
    cout << "2nd maximum: " << max2 << endl;
    cout << "3rd maximum: " << max3 << endl;

    return 0;
}
