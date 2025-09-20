#include <iostream>
using namespace std;
int isPowerOfTwo(int n)
{
    if (n < 1)
    {
        return 0;
    }
    while (n != 1)
    {
        if (n % 2 == 1) return 0;
        else n /= 2;
    }
    return 1;
}
int main()
{
    int n = 1;
    cout << isPowerOfTwo(n);
}