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
            cout << char(64 + j);
        }

        // to print the middle spaces
        for (int s = 1; s <= 2 * i - 3; s++)
        {
            cout << " ";
        }

        // right side characters
        for (int j = n + i - 1; j <= 2 * n - 1; j++)
        {
            if (i == 1 && j == n)
                continue;

            cout << char(64 + j);
        }
        cout << endl;
    }
    return 0;
}
