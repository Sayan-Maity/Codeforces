#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    int s, n, c;
    pair<int, int> a[1000];
    while (cin >> s >> n)
    {
        c = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;

            sort(a, a + n);
            for (int i = 0; i < n; i++)
            {
                if (s <= a[i].first)
                {
                    c = 0;
                    break;
                }
                else
                    s += a[i].second;
            }
        }
        (c == 0) ? cout << "NO" : cout << "YES";
    }
}