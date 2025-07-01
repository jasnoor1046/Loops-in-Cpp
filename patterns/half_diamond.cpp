#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    // for upper half part
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << " * ";
        }
        cout << endl;
    }
    // for lower part
    for (int i = n - 1; i >= 1; --i)
    { // here we have taken n-1 to avoid the repetation of fourth line.

        for (int j = 1; j <= i; ++j)
        { // this loop will print the stars.
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}