#include <iostream>
using namespace std;
int main()
{

    int num = 38;
    while (num > 9) // jbtk ki num 9 se bda hai
    {
        int digit,sum = 0;
        while (num != 0)
        {
            digit = num % 10;
            sum += digit;
            num /= 10;
        }
        num = sum;
    }
    cout << num;
}