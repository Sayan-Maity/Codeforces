#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll n, sum = 0;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    (sum % 4 != 0) ? cout << (sum / 4) + 1 : cout << sum / 4;
}