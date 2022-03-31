#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s, s1;
    cin >> s;

    for (int i = 0; i < s.length(); i += 2)
    {
        s1.push_back(s[i]);
    }
    sort(s1.begin(), s1.end());
    for (int i = 0; i < s1.length() - 1; i++)
    {
        cout << s1[i] << "+";
    }
    cout << s1[s1.length() - 1] << endl;

    return 0;
}
