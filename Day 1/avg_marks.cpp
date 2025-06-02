#include <iostream>
using namespace std;
int main()
{
    float eng, math, sci,avg;
    cout << "enter english marks: ";
    cin >> eng;

    cout << "enter math marks: ";
    cin >> math;

    cout << "enter science marks: ";
    cin >> sci;

    avg = (eng+math+sci)/3;

    cout<<"The average of marks is ="<<avg;

    return 0;
}