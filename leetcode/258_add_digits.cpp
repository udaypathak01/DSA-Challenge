// Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

// Example 1:

// Input: num = 38
// Output: 2
// Explanation: The process is
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2 
// Since 2 has only one digit, return it.


#include <iostream>
using namespace std;
int main()
{

    int num = 38;
    while (num > 9) // jbtk ki num 9 se bda hai
    {
        int digit, sum = 0;
        while (num != 0) // jbtk num 0 nhi ho jata 
        {
            digit = num % 10;
            sum += digit;
            num /= 10;
        }
        num = sum;
    }
    cout << num;
}