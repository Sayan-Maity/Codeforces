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
        string s, s1, a, b;
        cin >> s >> s1;
        int l1 = s.size();
        int l2 = s1.size();
        a = s, b = s1;
        while (l1 != l2)
        {
            if (l1 < l2)
                s += a;
            else
                s1 += b;

            l1 = s.size();
            l2 = s1.size();
            if (l1 > 500 && l2 > 500)
                break;
        }
        (s == s1) ? cout << s : cout << -1;
        cout << "\n";
    }
}
