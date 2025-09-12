#include <iostream>
#include <limits.h>
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
// for subarray
void subArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k];
            }
            cout << " ";
        }
        cout << endl;
    }
}
// for max  subarray sum( brute force approch)
void maxSubArraySum(int *arr, int n)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int currSum = 0;
            for (int k = i; k <= j; k++)
            {
                currSum += arr[k];
            }
            cout << currSum << ", ";
            maxSum = max(maxSum, currSum);
        }
        cout << endl;
    }
    cout << "maximum subarrays sum= " << maxSum;
}
// for max  subarray sum( brute force approch)(optimized code On^2 time complexity)
void maxArraySum2(int *arr, int n)
{
    int maxSum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int currSum = 0;
        for (int end = start; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
        }
    }
    cout << "your max sum of subArray is: " << maxSum;
}
// for max  subarray sum( Kadane's algo approch)
void maxArraySum3(int *arr, int n)
{
    int maxSum = INT_MIN, currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum = currSum + arr[i];
        maxSum = max(maxSum, currSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << "the max sum is: " << maxSum;
}
// buy and sell stock problem to find max profit
void buyAndSellStock(int *prices, int n)
{
    int bestBuy[10000];
    bestBuy[0] = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);
    }
    int maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }
    cout << "maxprofit = " << maxProfit << endl;
}
void 
int main()
{
    // int arr[5] = {2, 34, 5, 56, 1};
    // int n = sizeof(arr) / sizeof(int);
    // cout << "your key was :" << linearSearch(arr, n, 5) << endl;
    // reverceArr2(arr, n);
    // +++++++++++++ for binary search +++++++++++++
    // int arr[5] = {2, 4, 6, 8, 10};
    // int n = sizeof(arr) / sizeof(int);
    // cout << binarySearch(arr, n, 8);
    // +++++++++++++ for subarray On^3 +++++++++++++
    // int arr[5] = {1, 2, 3, 4, 5};
    // int n = sizeof(arr) / sizeof(int);
    // subArray(arr, n);
    // +++++++++++++ for max  subarray sum by optimized code On^2 time complexity +++++++++++++
    // int arr[6] = {2, -3, 6, -5, 4, 2};
    // int n = sizeof(arr) / sizeof(int);
    // maxArraySum2(arr, n);
    //+++++++++++++ for max  subarray sum( Kadane's algo approch( On)) +++++++++++++
    // int arr[6] = {2, -3, 6, -5, 4, 2};
    // int n = sizeof(arr) / sizeof(int);
    // maxArraySum3(arr, n);
    // buy and sell stock problem to find max profit
    // int prices[] = {7, 1, 5, 3, 6, 4};
    // int n = sizeof(prices) / sizeof(int);
    // buyAndSellStock(prices, n);

 
}