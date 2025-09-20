#include <iostream>
using namespace std;

int main()
{
    int year = 4;
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}