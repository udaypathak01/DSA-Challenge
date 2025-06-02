// WAP to input a number and check whether the number is an Armstrong number or not?
#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "Enter a number to check numver is Armstrong num or not: ";
    cin >> n;

    for (int i = n; i > 0; i /= 10)
    {
        int digit = i % 10;
        sum += digit * digit * digit;
    }
    if (sum == n)
    {
        cout << "your number is a Armstrong number!";
    }
    else
    {
        cout << "your number is not a Armstrong number!";
    }
}
