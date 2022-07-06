#include <bits/stdc++.h>
using namespace std;

#define ll long long
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
        ll x, y, a, b;
        cin >> x >> y >> a >> b;
        ll ans = 0;

        if ((2 * a) <= b)
            ans = (x + y) * a;
        else
        {
            ll mi = min(x, y);
            ll ma = max(x, y);
            ans = (mi * b) + ((ma - mi) * a);
        }
        cout << ans << endl;
    }
}