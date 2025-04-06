#include <iostream>
using namespace std;

int main()
{
    // Aim to print 4,7,10,13,16
    int n;
    int a = 4;
    int d = 3;
    cout << "Enter n: ";
    cin >> n;
    int end_term = a + (n - 1) * d;
    for (int i = 4; i <= end_term; i = i + 3)
    {
        cout << i << " ";
    }
    return 0;
}