// sum of odd digits of a number
#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "enter your number: ";
    cin >> n;

    while (n > 0)
    {
        int last_digit = n % 10;
        if (last_digit % 2 != 0)
        {
            sum += last_digit;
        }
        n /= 10;
    }
    cout << "your sum is: " << sum;
}