#include <iostream>
using namespace std;

// Function to print one line of the pattern
void printLine(int stars, int spaces)
{
    // Left stars
    for (int i = 1; i <= stars; i++)
        cout << "*";

    // Middle spaces (only if spaces > 0)
    for (int i = 1; i <= spaces; i++)
        cout << " ";

    // Right stars
    for (int i = 1; i <= stars; i++)
        cout << "*";

    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int total_width = 2 * n - 1;

    // Top half including middle
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            // First row: full stars
            for (int j = 1; j <= total_width; j++)
                cout << "*";
            cout << endl;
        }
        else
        {
            int stars = n - i + 1;
            int spaces = 2 * i - 3;
            printLine(stars, spaces);
        }
    }

    // Bottom half
    for (int i = n - 1; i >= 1; i--)
    {
        if (i == 1)
        {
            for (int j = 1; j <= total_width; j++)
                cout << "*";
            cout << endl;
        }
        else
        {
            int stars = n - i + 1;
            int spaces = 2 * i - 3;
            printLine(stars, spaces);
        }
    }

    return 0;
}
