// reverse digits using while loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter your number here: ";
    cin >> n;

    int res = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        res = res * 10 + last_digit;
        n /= 10;
    }
    cout << "result is:" << res;
}