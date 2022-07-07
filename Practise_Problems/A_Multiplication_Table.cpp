#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x, cnt = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        if (x % i == 0 && x / i <= n)
            cnt++;
    }
    cout << cnt;
}
