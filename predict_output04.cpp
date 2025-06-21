#include <iostream>
using namespace std;
int main()
{
    int x = 10, y = 0;
    while (x >= y)
    {
        x--;
        y++;
        cout << x << " " << y << endl;
    }
}
/* x=10,y=0:true, 9 1
9>=1: 8 2
8>=2: 7 3
7>=3: 6 4
6>=4: 5 5
5>=5: 4 6
4>=6: condition is false the loops breaks*/