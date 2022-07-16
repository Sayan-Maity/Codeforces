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
        int n;
        cin >> n;
        vector<int> a(n);
        int res = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            res = a[0];
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] % res != 0)
            {
                cnt = 1;
                break;
            }
        }
        (cnt == 1) ? cout << "NO" : cout << "YES";
        cout << "\n";
    }
}