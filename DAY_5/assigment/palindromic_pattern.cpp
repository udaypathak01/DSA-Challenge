#include <iostream>
using namespace std;
int main()
{
    int n = 5;
   
    for (int i = 1; i <= n; i++)
    {
        // spaces
          for (int j = 1; j <= n-i; j++)
        {
         cout<<" ";   
        }
        // 1st half
        for (int j = i; j >= 1; j--)
        {
         cout<<j;   
        }
        // 2nd half
        for (int j = 1; j <= i; j++)
        {
         cout<<j;   
        }
        cout << endl;
    }
}