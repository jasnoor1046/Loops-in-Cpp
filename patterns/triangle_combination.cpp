#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        //  spaces
        int spaces = 2 * (n - i) - 1;
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        // right stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // middle line of the pattern
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << "*";
    }
    cout << endl;
    // bottom half part
    for (int i = n - 1; i >= 1; i--)
    { // n-1 is taken to avoid the repetation of stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Again middle spaaces
        int spaces = 2 * (n - i) - 1;
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        // right stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}