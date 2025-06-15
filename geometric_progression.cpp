// series to be printed is 3,12,48

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    int a, r;
    cout << "Enter the first term: ";
    cin >> a;
    cout << "Enter the common ratio: ";
    cin >> r;
    cout << "Enter the no. of terms to be printed: ";
    cin >> n;
    long long int gp = a * pow(r, (n - 1));
    for (int i = a; i <= gp; i = i * r)
    {
        cout << i << endl;
    }

    return 0;
}