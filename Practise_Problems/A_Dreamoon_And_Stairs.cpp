#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    int x = (n + 1) / 2;
    while (x <= n)
    {
        if (x % m == 0)
        {
            cout << x;
            return 0;
        }
        else
            x++;
    }
    cout << -1;
    return 0;
}