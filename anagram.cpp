#include <bits/stdc++.h>
using namespace std;
bool anagram(string str1, string str2)
{

    if (str1.length() != str2.length())
    {
        return false;
    }
    else
    {
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());

        for (int i = 0; i < str1.length(); i++)
            if (str1[i] != str2[i])
            {
                return false;
            }
            else
            {
                return true;
            }
    }

    return false;
}
int main()
{
    string str1;
    string str2;
    cout << "enter string 1:\n";
    getline(cin, str1);
    cout << "enter string 2:\n";
    getline(cin, str2);
    if (anagram(str1, str2))
        cout << "True";
    else
        cout << "False";

    return 0;
}