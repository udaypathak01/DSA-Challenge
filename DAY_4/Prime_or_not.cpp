#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout << "enter your number to check that is prime or not: ";
    cin >> n;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "your number is not a prime number.";
            break;
        }
        else
        {
            cout << "your number is prime number.";
            break;
        }
    }
}