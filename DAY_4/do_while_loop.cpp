#include <iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cout << "enter number: ";
        cin >> n;
        if (n % 10 == 0)
        {
            break;
        }
        else if (n % 2 == 0)
        {
            continue;
        }
        cout << "you entered: " << n << endl;
    } while (true);
}