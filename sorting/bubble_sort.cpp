#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 7, 5, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 2 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}