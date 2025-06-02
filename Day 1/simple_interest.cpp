#include <iostream>
using namespace std;
int main()
{
    float p, r, t, SI;
    cout << "enter principle amount: ";
    cin >> p;

    cout << "enter rate of intrest: ";
    cin >> r;

    cout << "enter total time: ";
    cin >> t;

    SI = (p * r * t) / 100;
    cout << "simple intrest is: " << SI;
}