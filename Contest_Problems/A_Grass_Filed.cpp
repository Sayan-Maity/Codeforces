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

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == 0 && b == 0 && c == 0 && d == 0)
            cout << 0 << "\n";
        else
        {
            if (a == 1 && d == 1 && c == 1 && b == 1)
                cout << 2 << "\n";
            else
                cout << 1 << "\n";
        }
    }
}
