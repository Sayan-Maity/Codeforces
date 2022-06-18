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
        int a, b, c;
        cin >> a >> b >> c;

        int ans = ((c / a) * a) + b;
        (ans <= c) ? cout << ans : cout << ans - a;
        cout << "\n";
    }
}
