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

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (b == 1)
            cout << "NO"
                 << "\n";
        else
        {
            cout << "YES"
                 << "\n";
            cout << a << " " << a * b << " " << a * (b + 1);
            cout << "\n";
        }
    }
}
