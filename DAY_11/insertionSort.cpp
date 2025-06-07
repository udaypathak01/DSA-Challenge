#include <iostream>
using namespace std;
void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }
        arr[prev + 1] = curr;
    }
    cout << (arr, n);
}
int main()
{
    int arr[5] = {5, 3, 1, 3, 2};
    insertionSort(arr, 5);
}