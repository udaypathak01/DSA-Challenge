#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "uday pathak";
    for (char ch : str)
    {
        cout << ch << ',';
    }
    cout << endl;
    
    // these are some member functions of c++ stings's class
    cout << str.length() << endl;
    cout << str.at(5) << endl;
    cout << str.substr(0, 4) << endl;
    cout << str.find('a') << endl;
}