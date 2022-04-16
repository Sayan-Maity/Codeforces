#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int n, i, c = 0;
    cin >> n;
    string s;
    cin >> s;

    for (auto &it : s)
    {
        it = tolower(it);
    }
    cout << (sz(set<char>(all(s))) == 26 ? "YES\n" : "NO\n");
}
