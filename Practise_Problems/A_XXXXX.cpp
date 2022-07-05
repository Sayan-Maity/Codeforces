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
        int n, x, a, sum = 0, l = -1, r;
        cin >> n;
        cin >> x;
        for (int i = 0; i < n; i++)
        {
            cin >> a;

            if (a % x)
            {
                if (l == -1)
                {
                    l = i;
                    r = i;
                }
                sum += a;
            }
        }
        if (sum % x)
            cout << n << "\n";
        else if (l == -1)
            cout << -1 << "\n";
        else
            cout << n - min(l = 1, n - r) << "\n";
    }
}
