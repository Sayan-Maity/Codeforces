#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] > 1)
            {
                cnt = 1;
                break;
            }
        }
        (cnt == 1) ? cout << "NO" : cout << "YES";
        cout << "\n";
    }

    return 0;
}
