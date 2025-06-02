#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter your number(to check even or odd):";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "your number is a even number!";
    }
    else
    {
        cout << "your number is a odd number!";
    }
}