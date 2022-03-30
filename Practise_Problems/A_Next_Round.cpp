#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ll n, k, cnt = 0;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] >= a[k - 1] && a[i] > 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
