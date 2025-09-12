#include <iostream>
using namespace std;
// brute force approch to search in sorted matrix
int BruteForceSearch(int matrix[][4], int key, int n, int m)
{
    for (int i = 0; i < n; i++) // for rows
    {
        for (int j = 0; j < n; j++) // for columns
        {
            if (matrix[i][j] == key)
            {
                cout << "this is indexs using brute force method: " << '(' << i << ',' << j << ')';
            }
        }
    }
}
int BinarySearch(int matrix[][4], int key, int n, int m)
{
}
int stairCaseSearch(int matrix[][4], int key, int n, int m)
{
    int i = 0, j = m - 1;
    while (i < n && j >= 0)
    {
        int start = matrix[i][j];
        if (matrix[i][j] == key)
        {
            cout << "this is indexs using brute force method: " << '(' << i << ',' << j << ')';
            return true;
        }
        else if (matrix[i][j] > key)
        {
            j--;//left
        }
        else
        {
            i++;//down
        }
    }
    cout<<"key not found";
    return -1;
}

int main()
{
    const int n = 4, m = 4;
    int matrix[n][m] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50},
    };
    // BruteForceSearch(matrix, 33, n, m);
    // BinarySearch(matrix,33,n,m);
    stairCaseSearch(matrix, 33, n, m);
}