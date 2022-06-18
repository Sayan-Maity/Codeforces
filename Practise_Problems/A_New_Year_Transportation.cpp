#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int n, t;
    cin >> n >> t;

    vector<int> v(n);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    int pos = 1, nxt = 0;
    while (pos < t)
    {
        nxt = pos + v[pos];
        pos = nxt;
    }
    (pos == t) ? cout << "YES" : cout << "NO";
}
