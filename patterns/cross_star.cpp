#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Please enter an odd number for symmetry.\n";
        return 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j || i + j == n + 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}