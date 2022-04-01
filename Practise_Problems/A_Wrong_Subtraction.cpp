#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        (n % 10 == 0) ? n /= 10 : n -= 1;
    }
    cout << n;
}
