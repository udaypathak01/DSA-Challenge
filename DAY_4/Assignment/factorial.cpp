// WAP to find the Factorial of a number entered by the user.
#include <iostream>
using namespace std;
int main()
{
    int n;
    int fact = 1;
    cout << "Enter a number to find the factorial: ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        fact *= i;
    }
    cout << "factorial is:" << fact;
}