#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, max = 0;
    cin >> n;
    string s, a, res;
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        a.clear();
        for (int j = i; j <= i + 1 && j <= s.size(); j++)
        {
            a += s[j];
        }
        mp[a]++;
        if (mp[a] > max)
        {
            max = mp[a];
            res = a;
        }
    }
    cout << res;
}
