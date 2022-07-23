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
        int n, a, b, cnt = 1;
        cin >> n >> a >> b;
        string s;
        cin >> s;

        if (b >= 0)
            cout << n * (a + b) << "\n";
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] != s[i + 1])
                    cnt++;
            }
            cout << (a * n) + (b * ((cnt / 2) + 1)) << "\n";
        }
    }
}
