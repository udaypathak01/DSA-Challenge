#include <iostream>
using namespace std;
int BiToDec(int biNum)
{
    int n = biNum;
    int decNum = 0;
    int pow = 1;
    while (n > 0)
    {
        int lastDigit = n % 10;
        decNum += lastDigit * pow;
        pow = pow * 2;
        n /= 10;
    }
    cout<<decNum<<endl;
}
int main()
{
    BiToDec(1011);
}