#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the range: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
            cout << i << endl;
    }

    return 0;
}