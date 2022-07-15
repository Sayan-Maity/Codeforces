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
    string s;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0, x; i < n; i++)
        {
            cin >> x >> s;
            for (auto it : s)
            {
                if (it == 'U')
                    v[i] = (v[i] + 9) % 10;
                else
                    v[i] = (v[i] + 1) % 10;
            }
        }
        for (auto i : v)
            cout << i << " ";
        cout << "\n";
    }
}
