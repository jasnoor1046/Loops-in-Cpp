#include <iostream>
using namespace std;

int main()
{
    // this progrom will take the sum of orignal and the reversed number
    int remainder, reversed = 0, n, num;
    cout << "Enter a number: ";
    cin >> n;
    num = n;
    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    cout << (reversed + num);

    return 0;
}
