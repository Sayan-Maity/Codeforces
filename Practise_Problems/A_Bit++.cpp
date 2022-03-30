#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define FOR(i, a, n) for (register int i = (a); i < (int)(n); ++i)
#define all(n) (n).begin(), (n).end()
#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    FOR(i, 0, n)
        cin >> v[i];
    cout << count(all(v), "++X") + count(all(v), "X++") - count(all(v), "--X") - count(all(v), "X--") << endl;
    return 0;
}