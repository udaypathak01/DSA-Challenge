#include <iostream>
using namespace std;
int main()
{
    // +++++++ 2d array in cpp +++++++

    // int student[4][3] = {
    //     {100, 100, 100},
    //     {85, 74, 89},
    //     {45, 78, 56},
    //     {23, 45, 98},
    // };
    // cout << student[3][2] << endl;
    // cout << student[1][1] << endl;
    // cout << student[2][0] << endl;
    // cout << student[2][2] << endl;

    //++++++++++  input and output of 2d array ++++++++
    // input
    int student[3][3];
    int m = 3, n = 3;
    cout << "enter the values of 2d array (3X3):";
    for (int i = 0; i < m; i++) // rows
    {
        for (int j = 0; j < n; j++) // column
        {
            cin >> student[i][j];
        }
        cout << endl;
    }

    // output
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << student[i][j] << " ";
        }
        cout << endl;
    }
}