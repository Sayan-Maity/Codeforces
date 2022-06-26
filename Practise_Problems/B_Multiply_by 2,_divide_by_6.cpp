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
        int n, cnt = 0;
        cin >> n;
        while (n % 6 == 0)
        {
            n /= 6;
            cnt++;
        }
        while (n % 3 == 0)
        {
            n /= 3;
            cnt += 2;
        }
        (n == 1) ? cout << cnt : cout << -1;
        cout << "\n";
    }
}
