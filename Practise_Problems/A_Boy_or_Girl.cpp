#include <bits/stdc++.h>
using namespace std;
#include <set>

#define ll long long

int main()
{
    string s;
    int cnt = 0;
    cin >> s;
    int n = s.length();
    sort(s.begin(), s.end());
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
            cnt++;
    }
    ((n - cnt) % 2 == 0) ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
}
