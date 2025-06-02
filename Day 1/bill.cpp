#include <iostream>
using namespace std;
int main()
{
    float pencil, pen, eraser, toCost, gst;
    cout << "price of pencil: ";
    cin >> pencil;

    cout << "price of pen: ";
    cin >> pen;

    cout << "price of eraser: ";
    cin >> eraser;

    toCost = pencil + pen + eraser;
    cout << "your total cost is = " << toCost;

    gst = toCost * 0.18;
    cout << "\nyour total GST = " << gst;
    
    cout << "\nyour total payable ammount = " << toCost + gst;
    return 0;
}