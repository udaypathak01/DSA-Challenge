#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "enter 3 digit  number: ";
    cin >> n;
    int num = n;
    int dig1 = num % 10;
    num /= 10;
    int dig2 = num % 10;
    num /= 10;
    int dig3 = num;

    int cub_sum = (dig1 * dig1 * dig1) + (dig2 * dig2 * dig2) + (dig3 * dig3 * dig3);

    if (cub_sum == n)
    {
        cout<< "your number is a armstrong number";
    }
    else
    {
        cout << "not a armstrong number!";
    }
}