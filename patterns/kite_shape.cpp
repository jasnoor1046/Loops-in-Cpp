#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;
    int size = 2 * n - 1;

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            if (
                i == n ||
                j == n ||
                i + j == n + 1 ||
                j - i == n - 1 ||
                i - j == n - 1 ||
                i + j == 3 * n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}