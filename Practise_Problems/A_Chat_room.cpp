#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s, h = "hello";
    int j = 0, cnt = 0;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == h[j])
        {
            j++;
            cnt++;
        }
    }
    (h.size() == cnt) ? cout << "YES" : cout << "NO";
}
