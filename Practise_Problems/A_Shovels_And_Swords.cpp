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
        int a, b, ans = 0;
        cin >> a >> b;
        if (a == 0 || b == 0)
            cout << 0 << "\n";
        else
        {
            if (a / 2 >= b)
                ans = b;
            else if (b / 2 >= a)
                ans = a;
            else
                ans = (a + b) / 3;
            cout << ans << "\n";
        }
    }
}
