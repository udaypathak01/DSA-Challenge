#include <iostream>
#include <cstring>// for strlen
using namespace std;

void convertToUppercase(char word[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int ch = word[i] - 'a';               // posision Of Char
        
        // if (word[i] >= 'A' && word[i] <= 'Z') {// char between A and Z
        //     continue; // for skipping }
      
        if (word[i] >= 'a' && word[i] <= 'z') // char between a and z
        {
            word[i] = 'A' + ch;
        }
        cout << word[i];
    }
};

int main()
{
    char word[] = "ApPlE";
    int n = strlen(word); // number of char in character array
    convertToUppercase(word, n);
}