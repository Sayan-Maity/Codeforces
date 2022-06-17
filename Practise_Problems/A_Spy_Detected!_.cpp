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
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i] != a[i + 1])
            {
                if (a[i + 1] == a[i + 2])
                {
                    cout << i << "\n";
                    break;
                }
                else
                {
                    cout << i + 1 << "\n";
                    break;
                }
            }
        }
    }
}
