#include <iostream>
using namespace std;
int main()
{
    int m;

    cout << "Enter the no. of rows: ";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m - i; j++)
        { // it will print the leading spaces
            cout << " ";
        }
        cout << "*"; // printing first star
        // middle spaces
        if (i != 1)
        {
            for (int j = 1; j <= 2 * i - 3; j++)
            {
                cout << " ";
            }
            // second star
            cout << "*";
        }
        cout << endl;
    }
    /*to print the mirror image of the above, we will initialize the variable with m-1, as dont have to repeat
    the last star, we have to print one less than the above four are already printed4 stars now we have
    to print three  */
    for (int i = m - 1; i >= 1; i--)
    {
        for (int j = 1; j <= m - i; j++)
        {
            cout << " "; // this will print the leading spaces for the lower part
        }
        cout << "*";

        if (i != 1)
        {
            // to print the inner spaces
            for (int j = 1; j <= 2 * i - 3; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
