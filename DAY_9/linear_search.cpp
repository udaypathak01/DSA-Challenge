#include <iostream>
using namespace std;
int LinearSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        } 
    }

    return -1;
}
int main()
{
    int arr[] = {10, 23, 4, 56, 78, 90, 1, 34};
    int n = sizeof(arr) / sizeof(int);
    cout<<LinearSearch(arr, n, 100);
}