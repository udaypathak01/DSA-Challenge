#include <iostream>
using namespace std;
// sum function
int product(int num1, int num2)
{
    int sum = num1 * num2;
    return sum;
}
// main function
int main()
{
    int n1, n2;
    cout << "enter the 1st number to find product: ";
    cin >> n1;
    cout << "enter the 2nd number to find product: ";
    cin >> n2;

    cout << product(n1, n2);
    return 0;
}