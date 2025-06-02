// WAP to print the multiplication table of a number,entered by the user
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number to find table: ";
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        cout << i * n << endl;
    }
}
