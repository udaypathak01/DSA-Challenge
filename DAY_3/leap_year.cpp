#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "enter the year to check leap year or not: ";
    cin >> year;

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout << "leap year";
    }
    else
    {
        cout << "not a leap year";
    }
}