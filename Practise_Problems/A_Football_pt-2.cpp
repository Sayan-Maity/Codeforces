#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, cnt = 0;
    cin >> n;
    string s, s1, s2;
    cin >> s;
    s1 = s;
    for (int i = 1; i < n; i++)
    {
        cin >> s;
        if (s != s1)
        {
            s2 = s;
            cnt++;
        }
    }
    (cnt > n - cnt) ? cout << s2 : cout << s1;
}
