#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter a number: ";
    cin >> a;

    if (a > 0)
    {
        cout << "your number is positive!";
    }
    else if (a < 0)
    {
        cout << "your number is negative!";
    }
    else
    {
        cout << "your number is zero!";
    }
}