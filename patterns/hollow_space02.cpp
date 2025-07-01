#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter the no. of rows: ";
    cin >> n;

    // to print the characters of left side

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }

        // to print the middle spaces
        for (int s = 1; s <= 2 * i - 3; s++)
        {
            cout << " ";
        }

        // printing the right side numbers, here numbers will be printed in reverse,so intialized as n-i+1
        for (int j = n - i + 1; j >= 1; j--)
        {
            if (i == 1 && j == n) // to avoid the repetation of number 4 as it is already printed at above
                continue;
            cout << j;
        }
        cout << endl;
    }
    return 0;
}