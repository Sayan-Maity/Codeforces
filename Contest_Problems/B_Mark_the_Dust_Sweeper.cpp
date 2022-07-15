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
    string s;
    cin >> t;
    while (t--)
    {
        ll n, ans = 0, zero = 0;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = n - 2; i >= 0; i--)
        {
            if (a[i] == 0)
                zero++;
            else
            {
                ans += zero + a[i];
                zero = 0;
            }
        }
        cout << ans << "\n";
    }
}
