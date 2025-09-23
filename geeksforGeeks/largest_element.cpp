#include <iostream>
#include <vector>//for vectors
#include <climits>//for INT_MIN
using namespace std;

int main()
{
    vector<int> arr = {1, 8, 7, 56, 90};
    int n = arr.size();
    int large = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    cout << "largest number is:" << large;
}