
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        string s;
        for (int i = 0; i < m; i++)
            s += 'B';
        for (int i = 0; i < n; i++)
        {
            int res1 = v[i] - 1;
            int res2 = (m + 1 - v[i]) - 1;
            if (res1 < res2)
            {
                (s[res1] != 'A') ? s[res1] = 'A' : s[res2] = 'A';
            }
            else
            {
                (s[res2] != 'A') ? s[res2] = 'A' : s[res1] = 'A';
            }
        }
        for (auto it : s)
            cout << it;
        cout << "\n";
    }
}