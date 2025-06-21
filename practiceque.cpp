#include <iostream>
using namespace std;

int main()
{
    int n = 300, sum = 0;
    for (int i = 1; i <= n; i++)
    {

        if (i % 5 == 0) /*this will check if the current number is divisible by 5 it will be skipped */
            continue;
        sum = sum + i;

        if (sum > 300)
        {
            sum = sum - i; /*this will remove the extra number which gets added to avoid
            the sum to cross the limit of 300*/
            break;
        }
    }
    cout << sum;
    return 0;
}
