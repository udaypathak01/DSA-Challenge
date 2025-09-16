#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char arr[], int n)
{
    int start = 0,
        end = n - 1;
    while (start < end)
    {
        if (arr[start] != arr[end])
        {
            cout << "this is not a valid palindrome!";
            return false;
        }

        start++;
        end--;
    } 

    cout << "this is a valid palindrome!";
    return true;
}
int main()
{
    char arr[] = "aman";
    isPalindrome(arr, strlen(arr));
}

