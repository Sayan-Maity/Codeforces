//
//  <<<<<<<<<<<<< -- Process-1 -- >>>>>>>>>>>>>
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s, s2;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
            continue;
        else
        {
            s2 += '.';
            s2 += tolower(s[i]);
        }
    }
    cout << s2;
}

//
//  <<<<<<<<<<<<< -- Process-2 -- >>>>>>>>>>>>>
//

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string result;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = tolower(s[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
        {
            continue;
        }
        else
        {
            cout << "." << ch;
        }
    }
    cout << result;
}