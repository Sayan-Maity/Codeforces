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
        long long int r, g, b, w;
        cin >> r >> g >> b >> w;
        int count = 0;
        if (r % 2 != 0)
        {
            count++;
        }
        if (g % 2 != 0)
        {
            count++;
        }
        if (b % 2 != 0)
        {
            count++;
        }
        if (w % 2 != 0)
        {
            count++;
        }
        int x = min(r, min(g, b));
        if (count > 2 && x == 0)
        {
            cout << "NO" << endl;
        }
        else if (count == 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
