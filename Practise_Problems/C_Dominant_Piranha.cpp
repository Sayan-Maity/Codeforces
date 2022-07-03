#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, maxi = 0, cnt = 0, ind = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != maxi)
                continue;
            if ((i + 1) < n && a[i + 1] < maxi || (i - 1) >= 0 && a[i - 1] < maxi)
            {
                ind = i;
                cnt = 1;
                break;
            }
        }
        (cnt > 0) ? cout << ind + 1 : cout << -1;
        cout << "\n";
    }
}
