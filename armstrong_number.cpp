#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, r, p;
    cout << "Enter a number to be checked: ";
    cin >> n;
    p = n; // storing the original value of number before modifying it.
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10; // to extract the leftover number to get the remainder for the further operation
    }
    if (p == sum)
        cout << "It is an armstrong number";
    else
    {
        cout << "It is not an armstrong number";
    }
    return 0;
}
