#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, sum = 0, cnt = 0;
    cin >> k;
    int a[12];
    for (int i = 0; i < 12; i++)
        cin >> a[i];
    sort(a, a + 12, greater<int>());

    for (int i = 0; i < 12; i++)
    {
        sum += a[i];
        cnt++;
        if (sum >= k)
            break;
    }
    if (k == 0)
        cout << 0;
    else if (k > 0)
    {
        (sum < k) ? cout << -1 : cout << cnt;
    }
}
