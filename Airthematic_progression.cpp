#include <iostream>
using namespace std;

int main()
{
    // Aim to print 4,7,10,13,16
    int n, a, d;
    cout << "Enter the first term: ";
    cin >> a;
    cout << "Enter the common difference: ";
    cin >> d;
    cout << "Enter n: ";
    cin >> n;
    int end_term = a + (n - 1) * d;
    for (int i = a; i <= end_term; i = i + d)
    {
        cout << i << " ";
    }
    return 0;
}