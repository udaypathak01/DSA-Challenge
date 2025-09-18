// how to create dynamic 1D array
#include <iostream>
using namespace std;
void func()
{
    int size = 5;
    // 5 size ka array create krna hai!

    int *ptr = new int[size];
    // new keyword ka use karke dynamic 1d array create kiya hai or uska address pointer variable *ptr me store kiya hai

    int x = 1;
    for (int i = 0; i < size; i++)
    {
        ptr[i] = x;
        cout << arr[i] << " ";
        x++;
    }
    cout << endl;
    delete[] ptr;
    //delete hamesha use krna hota hai dynamic array me kyuki memory stack se ye program run hone ke baad delete ho jayega but jo humne heap memory ke andr 1d array create kiya hai wo besa hi rhega or *ptr delete hone ki bjh se hum usko access bhi nhi kar payenge to isliye us space ko delete krna jaruri hai...
}
int main()
{
    func();
}