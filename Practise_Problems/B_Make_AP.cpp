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
        int a, b, c;
        cin >> a >> b >> c;

        if ((2 * b - c) % a == 0 && (2 * b - c) / a > 0)
            cout << "YES\n"; // a fixed
        else if ((a + c) % 2 == 0 && ((a + c) / 2) % b == 0 && ((a + c) / 2) / b > 0)
            cout << "YES\n"; // b fixed
        else if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0)
            cout << "YES\n"; // c fixed
        else
            cout << "NO\n";
    }
}
