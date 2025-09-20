#include <iostream>
#include <climits>
using namespace std;
int main()
{
    long x = 1534236469;
    int x2 = 0, digit;
    while (x != 0)
    {
        digit = x % 10;
        x /= 10;
        if (x2 > INT_MAX / 10 || x2 < INT_MIN / 10)
        {
            return 0;
        }
        x2 = x2 * 10 + digit;
    }
    cout << x2;
}