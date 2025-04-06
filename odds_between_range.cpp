#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the range: ";
    cin >> n;
    for (int i = 0; i < n; i++) // iterates over the numbers in range then the condition is checked.
    {
        if (i % 2 != 0) // checks whether the number is odd
            cout << i << " " << endl;
    }

    return 0;
}