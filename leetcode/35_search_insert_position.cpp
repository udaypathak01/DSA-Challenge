#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 3, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0, end = n-1, mid, key = 2;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            cout << mid;
            break;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
    }
    cout << start;
}