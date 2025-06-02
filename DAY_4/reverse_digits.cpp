// reverse digits using while loop
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number here: ";
    cin>>n;
    for (int i = n; i >0; i/=10)
    {
       cout<<i%10;
    }
    
}