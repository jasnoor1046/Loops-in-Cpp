#include <iostream>
using namespace std;

int main()
{
    // we have to print the sum of the series.

    int n, sum = 0, next = 0, num;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Enter the digit: ";
    cin >> num;
    for (int i = 1; i <= n; i++)
    {
        next = next * 10 + num; // this will store the series,and the number of digits will keep on increasing
        sum = sum + next;       // this will calculate the sum
    }
    cout << sum;
    return 0;
}