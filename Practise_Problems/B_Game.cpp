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
        int cnt0 = 0, cnt1 = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                cnt0++;
            if (s[i] == '1')
                cnt1++;
        }
        int res = min(cnt0, cnt1);
        (res % 2 == 0) ? cout << "NET" : cout << "DA";
        cout << "\n";
    }
}