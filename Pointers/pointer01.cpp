/*Product of two numbers using pointers*/
#include <iostream>
using namespace std;

int main()
{
    int a, b, product;
    int *ptr1, *ptr2; // this will store the addresses of two numbers

    cout << "Enter the two numbers: ";
    cin >> a >> b;

    ptr1 = &a; // ptr1 points to the memory location where a is stored
    ptr2 = &b; // ptr2 points to the memory location where b is stored

    product = (*ptr1) * (*ptr2);
    // ptr1 and ptr2 are dereferenced to multiply the values stored at their memory loction.
    cout << "The product is " << product << endl;
}