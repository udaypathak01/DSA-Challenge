#include <iostream>
#include <vector>

using namespace std;
bool isSubset(vector<int> a, vector<int> b)
{
    int n = a.size();
    int m = b.size();
    for (int i = 0; i < m; i++)
    {
        bool found = false;
        for (int j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                found = true;
                break; // ek element mil chuka hai ab next check karo
            }
        }
        if (!found)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> a = {11, 7, 1, 13, 21, 3, 7, 3};
    vector<int> b = {11, 3, 7, 1, 7};

    if (isSubset(a, b))
    {
        cout << "yes b is subset of a";
    }
    else
    {
        cout << "yes b is not subset of a";
    }
}