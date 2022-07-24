#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
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
        int n, q;
        cin >> n >> q;
        for (int i = 1; i <= n; ++i)
        {
            a[i] = rdi;
        }
        int k = n, qq = 0;
        while (k >= 1 && qq < q)
        {
            if (a[k] > qq)
                ++qq;
            ans[k] = '1';
            --k;
        }
        for (int i = 1; i <= k; ++i)
        {
            if (a[i] <= q)
            {
                ans[i] = '1';
            }
            else
            {
                ans[i] = '0';
            }
        }
        printf("%s\n", ans + 1);
        for (int i = 1; i <= n; ++i)
        {
            ans[i] = 0;
        }
    }
}