#include <iostream>
using namespace std;

int main()
{
    int i = 97; // small letters
    while (i <= 122)
    {
        cout << i << "-" << char(i) << endl;
        i++;
    }
    int a = 65; // capital letters
    while (a < 91)
    {
        cout << a << "-" << char(a) << endl;
        a++;
    }
}
