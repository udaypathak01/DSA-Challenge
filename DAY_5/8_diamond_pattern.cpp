#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    // 1st pyramid
    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // 2nd pyramid
    for (int i = n; i >= 1; i--)
    {
        // spaces
        for (int j = n-i; j >= 1; j--)
        {
            cout << " ";
        }
        // stars
        for (int j = 2 * i - 1; j >= 1; j-- )
        {
            cout << "*";
        }
        cout << endl;
    }
}