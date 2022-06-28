#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, sum = 0, cnt = 0;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
            cnt++;
    }
    if (cnt >= m)
    {
        for (int i = 0; i < m; i++)
        {
            sum += a[i];
        }
    }
    else if (cnt < m)
    {
        for (int i = 0; i < cnt; i++)
        {
            sum += a[i];
        }
    }
    cout << -sum;
}
