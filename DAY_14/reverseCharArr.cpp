#include <iostream>
#include <cstring>
using namespace std;
void reverseCharArr(char word[], int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        swap(word[start], word[end]);
        start++;
        end--;
    }
    cout<<word;
}
int main()
{
    char word[] = "naman";
    reverseCharArr(word, strlen(word));
}