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
         cout<<"  ";   
        }
        // stars 
         for (int j = 1; j <= i; j++)
        {
         cout<<"* ";   
        }
        // stars 
         for (int j = n-i; j >= 1; j--)
        {
         cout<<"* ";   
        }
        cout << endl;
    }
}