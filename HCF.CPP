#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout << "Enter the two numbers to calculate the HCF: ";
    cin >> a >> b;
    int originalA = a, originalB = b; // to preserve the original values of and b before modifying them.
    // this the euclidean algorithm
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp; // a will be the HCF
    }
    cout << "The HCF of " << originalA << " and " << originalB << " is: " << a << endl;
    return 0;
}
