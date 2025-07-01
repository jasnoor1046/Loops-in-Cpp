#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++) // it is for printing number of rows
    {
        for (int j = 1; j <= n - i; j++) // this loop will print the spaces accordingly
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) // this will print the number in the pattern
        {
            cout << k;
        }
        for (int q = i - 1; q >= 1; q--)
        { // this will print the inverted pyramid. i-1 is taken to remove the extra
            // that gets printed, -1 will remove it
            cout << q;
        }
        cout << endl;
    }
    return 0;
}