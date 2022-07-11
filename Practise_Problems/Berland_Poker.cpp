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
        int n, m, k;
        cin >> n >> m >> k;
        int c = n / k;
        if (c < m)
        {
            m = m - c;
            k = k - 1;
            if (m % k != 0)
                m = m / k + 1;
            else
                m = m / k;
            cout << c - m << endl;
        }
        else
        {
            cout << m << endl;
        }
    }
}
