#include <iostream>
using namespace std;
int spiralMetrix(int n, int m)
{
    int arr[n][m] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };
    int sCol = 0, eCol = m, sRow = 0, eRow = n;
    while (sRow <= eRow && sCol <= eCol)
    {
        // top
        for (int i = sCol; i < eCol; i++)
        {
            cout << arr[sCol][i] << " ";
        }
        // right
        for (int j = sRow + 1; j < eRow; j++)
        {
            cout << arr[j][eCol - 1] << " ";
        }
        // bottom
        
        for (int i = eCol - 1; i >= sCol; i--)
        {
            cout << arr[eRow - 1][i] << " ";
        }
        // left
        for (int i = eRow - 1; i >= sRow + 1; i--)
        {
            cout << arr[i][sCol] << " ";
        }
        sCol++;
        sRow++;
        eCol--;
        eRow--;
    }
}
int main()
{
    spiralMetrix(4, 4);
}