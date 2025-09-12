#include <iostream>
using namespace std;
string studentsa_funtion()
{
    string students[3][3] = {
        {"name", "class", "roll"},
        {"uday", "BCA", "156"},
        {"prachi", "BCA", "022"},
    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << students[i][j] << " ";
        }
        cout << endl;
    }
}

int inputArray(int n, int m)
{
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the numbers: ";
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
    }
}

int main()
{
    // studentsa_funtion();
    inputArray(3, 2);
}