#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int t, cntm = 0, cntc = 0, cntd = 0;
    cin >> t;
    while (t--)
    {
        int m, c;
        cin >> m >> c;
        if (m > c)
            cntm++;
        if (c > m)
            cntc++;
        if (m == c)
            cntd++;
    }
    if (cntm > max({cntc, cntd}))
        cout << "Mishka";
    else
    {
        (cntd == t || cntm == cntc) ? cout << "Friendship is magic!^^" : cout << "Chris";
    }
}
