#include <iostream>
using namespace std;

int main()
{
  int n = 3;

  // Upper half of the diamond
  int i = 1;
  while (i <= n)
  {
    int j = 1;
    // Print spaces
    while (j <= n - i)
    {
      cout << " ";
      j++;
    }
    // Print stars and /*  */hollow spaces
    j = 1;
    while (j <= 2 * i - 1)
    {
      if (j == 1 || j == 2 * i - 1)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
      j++;
    }
    cout << endl;
    i++;
  }
  // Lower half of the diamond
  i = n - 1;
  while (i >= 1)
  {
    int j = 1;

    // Print spaces
    while (j <= n - i)
    {
      cout << " ";
      j++;
    }

    // Print stars and hollow spaces
    j = 1;
    while (j <= 2 * i - 1)
    {
      if (j == 1 || j == 2 * i - 1)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
      j++;
    }
    cout << endl;
    i--;
  }

  return 0;
}
