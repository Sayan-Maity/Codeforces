#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll k, n, w, sum = 0, res;
    cin >> k >> n >> w;
    res = (k * ((w * (w + 1)) / 2));
    (res > n) ? cout << (res - n) : cout << "0";
    cout << endl;
}
