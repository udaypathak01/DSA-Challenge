#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age here: ";
    cin >> age;
    if (age >= 18)
    {
        cout << "user can vote";
    }
    else
    {
        cout << "user can not vote";
    }
}