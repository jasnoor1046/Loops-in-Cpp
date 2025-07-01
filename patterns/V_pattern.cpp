#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // printing the number of rows
    for (int i = 1; i <= n; i++)
    {
        // printing the leading spaces
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        // printing the middle spaces
        for (int j = 1; j <= 2 * (n - i) - 1; j++)
        {
            cout << " ";
        }
        if (i != n)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
