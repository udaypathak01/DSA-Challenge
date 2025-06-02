#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    cout << ptr << " " << &a << endl;
    // pointers of pointer
    int **pptr = &ptr;
    cout<<pptr;
    // floating value pointer
    // float b = 20;
    // float *ptr1 = &b;
    // cout<<ptr1;
}