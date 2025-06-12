#include <iostream>
using namespace std;
// linearSearch function to find key in arr
int linearSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "your key is on index number" << i << endl;
        }
    }
}

// function for printing array
void printArry(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
}

// Reverce a arr function with extra space
void reverceArr(int *arr, int n)
{
    int copyArr[n];
    // reverse the elements into copy array
    for (int i = 0; i < n; i++)
    {
        int j = n - i - 1;
        copyArr[i] = arr[j];
    }
    // copy elements from copy array to original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = copyArr[i];
    }
    printArry(arr, n);
}

// reverce a array without extra space
void reverceArr2(int *arr, int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    printArry(arr, n);
}

// for binary search
int binarySearch(int *arr, int n, int key)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    // int arr[5] = {2, 34, 5, 56, 1};
    // int n = sizeof(arr) / sizeof(int);
    // cout << "your key was :" << linearSearch(arr, n, 5) << endl;
    // reverceArr2(arr, n);

    // for binary search
    int arr[5] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(int);
    cout << binarySearch(arr, n, 8);
}