#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << "element find at " << i;
        }
       
    }
}