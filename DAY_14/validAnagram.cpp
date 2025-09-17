#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string str1, string str2)
{
    // 1st condition
    if (str1.length() != str2.length())
    {
        cout << "not a valid anagram";
        return false;
    }
    // character counting
    int count[26] = {0};
    for (int i = 0; i < str1.length(); i++)
    {
        count[str1[i] - 'a']++; // iska matlb hai ki count array ki ith index pr jo value hai usko ++ kar do
    }

    // str2 character counting decreasing
    for (int i = 0; i < str2.length(); i++)
    {
        if (count[str2[i] - 'a'] == 0)
        {
            cout << "not a valid anagram";
            return false;
        }
        count[str2[i] - 'a']--;
    }
    cout << "valid anagram";
    return true;
}

int main()
{
    string str1 = "anagram";
    string str2 = "nagaram";
    isAnagram(str1, str2);
}