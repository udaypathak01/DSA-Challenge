#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = n; i >= 0; i--)
    {
        int dig = n % 10;
        n /= 10;
        sum += dig;
    }
    cout <<"your sum is: "<< sum;
}