#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++) // this loop will print the spaces accordingly
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        { // this loop will print the stars
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    { // for other half part
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        { // this loop will print the stars
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}