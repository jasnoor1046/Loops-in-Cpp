#include <iostream>
using namespace std;

int main()
{ // numbers in reverse order.
    int n;
    cout << "Enter the no of terms: ";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        cout << i << endl;
    }
    return 0;
}