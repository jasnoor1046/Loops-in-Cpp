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
        for (int k = 1; k <= 2 * i - 1; k++)
        { // this loop will print the stars
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}