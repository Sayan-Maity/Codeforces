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
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[0] == ')' || s[s.length() - 1] == '(' || s.length() % 2 != 0)
            {
                cout << "NO\n";
                break;
            }
            else
            {
                cout << "YES\n";
                break;
            }
        }
    }
}
