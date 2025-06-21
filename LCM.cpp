#include <iostream>
using namespace std;

int main()
{
    int a, b, greater, lcm;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    if (a > b)
        greater = a;
    else
        greater = b;
    while (1)
    {

        if (greater % a == 0 && greater % b == 0)
        {
            lcm = greater;
            break;
        }
        else
        {
            ++greater;
        }
    }
    cout << lcm;
    return 0;
}