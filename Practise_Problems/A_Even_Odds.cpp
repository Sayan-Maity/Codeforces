#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, k, div = 0, ans = 0;
    cin >> n >> k;

    div = (n + 1) / 2;
    if (k <= div)
    {
        ans = (k * 2) - 1;
    }
    else
    {
        ans = (k - div) * 2;
    }
    cout << ans << endl;
}
