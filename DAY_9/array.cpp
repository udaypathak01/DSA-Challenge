#include <iostream>
using namespace std;
int main()
{
    // int arr[50] = {1, 2, 3};
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;

    // ************** output the array ***************

    // int arr[] = {1, 2, 3, 4, 5};
    // int n = sizeof(arr) / sizeof(int);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // ************** input the array ***************
    int n;
    cout << "enter the size of array: ";
    cin >> n;
    int arr[n] = {};
    cout << "enter the values:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // output
    int m = sizeof(arr) / sizeof(int);
    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << " ";
    }
}