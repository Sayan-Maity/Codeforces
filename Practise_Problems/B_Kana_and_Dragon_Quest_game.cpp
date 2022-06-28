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
        int x, n, m;
        cin >> x >> n >> m;
        int y = x;

        while (n--)
        {
            x = (x / 2) + 10;
        }
        x -= (m * 10);
        y = y - (m * 10);
        (x <= 0 || y <= 0) ? cout << "YES" : cout << "NO";
        cout << "\n";
    }
}