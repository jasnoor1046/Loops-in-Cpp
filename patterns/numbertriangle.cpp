#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    // this loop is for printing the rows
    for (int i = 1; i <= n; i++)
    {
        // printing the leading spaces:
        for (int j = 1; j <= n - i; ++j)
            cout << " ";
        // print the first number
        cout << i;

        // printing the middle spaces
        if (i > 1)
        {
            int middlespaces = 2 * i - 3;
            for (int k = 1; k <= middlespaces; ++k)
                cout << " ";

            // to print the second number
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
