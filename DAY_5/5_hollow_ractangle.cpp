#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        cout <<"* ";
        for (int j = 2; j <= n-1; j++)
        {
            if (i == 1 || i == n)
            {
                cout <<"*";
            }
            else
            {
                cout << " ";
            }
        }
        cout <<"* " << endl;
    }
}