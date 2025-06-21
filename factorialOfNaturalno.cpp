#include <iostream>
using namespace std;

int main()
{
    // to print he factorial of 'n' natural numbers
    int n, factorial = 1;
    cout << "Enter til which number you want factorial to be calculated: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
        cout << factorial << endl;
    }

    return 0;
}