#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, minia = INT_MAX, minib = INT_MAX;
        ll ans = 0;
        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            minia = min(a[i], minia);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            minib = min(b[i], minib);
        }
        for (int i = 0; i < n; i++)
        {
            int dif = min((a[i] - minia), (b[i] - minib));
            ans += dif;
            ans += ((a[i] - minia - dif) + (b[i] - minib - dif));
        }
        cout << ans << "\n";
    }
}
