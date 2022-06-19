#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, e = 0, o = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != i % 2)
            {
                if (a[i] % 2 == 0)
                    e++;
                else
                    o++;
            }
        }
        (e == o) ? cout << e : cout << -1;
    }
}
