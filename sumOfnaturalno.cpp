#include <iostream>
using namespace std;

int main()
{
    int sum = 0, n; // value will be stored in the sum variable
    cout << "Enter the number of digits whose sum is to be taken: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of " << n << " term is: " << sum;
    return 0;
}