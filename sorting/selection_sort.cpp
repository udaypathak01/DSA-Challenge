//selection sort acending order
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n - 1; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
}
int main()
{
    int arr[] = {5, 4, 7, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
}