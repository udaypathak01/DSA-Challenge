#include <iostream>
using namespace std;
void bruteForceCountOfSeven(int matrix[100][100], int n, int m)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 7)
            {
                count++;
            }
        }
    }
    cout << "number of 7's is: " << count;
}

int main()
{
    int n, m;
    cout << "enter the rows of the matrix: ";
    cin >> n;
    cout << "enter the cols of the matrix: ";
    cin >> m;
    int matrix[100][100];

    cout << "enter elements of matrix: ";
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    };
    bruteForceCountOfSeven(matrix, n, m);
}