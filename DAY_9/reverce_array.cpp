#include <iostream>
using namespace std;
int main()
{
    // ********************* method 1 ****************************

    // int arr[] = {1, 2, 3, 4, 5};
    // int n = sizeof(arr) / sizeof(int);

    // int copy_arr[n] = {};
    // // loop for creating copy array with reverce elements of orignal array
    // for (int i = 0; i < n; i++)
    // {
    //     int j = n - i - 1;
    //     copy_arr[i] = arr[j];
    // }
    // // loop for update elements in original array from copy array
    // for (int i = 0; i < n; i++)
    // {
    //     int j = n - i - 1;
    //     arr[i] = copy_arr[i];
    //     cout << arr[i] << ",";
    // }

    // ********************* method 2 ****************************
    int arr[] = {1, 2, 3, 4, 5, 7, 6, 42, 0};
    int n = sizeof(arr) / sizeof(int);

    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
}