#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++) // it is for printing number of rows
    {
        for (int j = 1; j <= n - i; j++) // this loop will print the leading spaces accordingly
        {
            cout << " ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << char('A' + k - 1);
        }
        for (int k = 2; k <= i; k++)
        {
            cout << char('A' + k - 1);
        }
        cout << endl;
    }

    return 0;
}
