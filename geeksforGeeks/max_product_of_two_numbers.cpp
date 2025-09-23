#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 4, 3, 6, 7, 0};
    int n = arr.size();

    int first = -1, second = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second)
        {
            second = arr[i];
        }
    }
    cout << "max product is: " << first * second;
    return 0;
}