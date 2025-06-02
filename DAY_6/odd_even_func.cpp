#include <iostream>
using namespace std;
bool isPrime(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main(){
   cout<<isPrime(21);
}