#include <iostream>
using namespace std;

int main()
{
    int N, roll, maxStreak = 0, currentStreak = 0;
    cout << "Enter the number of dice rolls: ";
    cin >> N;
    int count = 0;
    while (count < N)
    {
        cout << "Enter result of roll " << count + 1 << ": ";
        cin >> roll;

        if (roll >= 1 && roll <= 5)
        {
            currentStreak++;
        }
        else
        {
            if (currentStreak > maxStreak)
            {
                maxStreak = currentStreak;
            }
            currentStreak = 0;
        }

        count++;
    }

    if (currentStreak > maxStreak)
    {
        maxStreak = currentStreak;
    }

    cout << "The longest streak without a six is: " << maxStreak << endl;

    return 0;
}
