#include <iostream>
#include <climits>
using namespace std;
void countSort(int *arr, int n)
{
    int freq[10000]; // rang
    int minVal = INT_MAX, maxVal = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        minVal = min(minVal, arr[i]);
        maxVal = min(maxVal, arr[i]);
    }
    // 1st step
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]];
    }
    // 2nd step
    for (int i = minVal, j = 0; i <= minVal; i++)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
}
int main()
{
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    countSort(arr, 8);
}