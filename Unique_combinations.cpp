#include <iostream>
using namespace std;

int main()
{
    int num[4];
    cout << "Enter distinct four numbers: ";
    for (int i = 0; i < 4; i++)
    { // this loop will enable us to enter the four digits
        cin >> num[i];
    }
    // these 4 loops will print unique cominations of these four numbers.
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
                continue;
            for (int k = 0; k < 4; k++)
            {
                if (k == i || k == j)
                    continue;
                for (int l = 0; l < 4; l++)
                {
                    if (l == i || l == j || l == k)
                        continue;
                    cout << num[i] << " " << num[j] << " " << num[k] << " " << num[l] << endl;
                }
            }
        }
    }
    return 0;
}
