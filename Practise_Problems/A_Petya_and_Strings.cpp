#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define ll long long

int main()
{
    int res = 0;
    string r, s;
    cin >> r >> s;

    for (int i = 0; i < r.length(); i++)
    {
        if (r[i] - s[i] == 32)
            res = 0;
        else if ((r[i] - s[i]) < 0 && r[i] - s[i] != 32)
            res = -1;
        else if ((r[i] - s[i]) > 0 && r[i] - s[i] != 32)
            res = 1;
    }
    cout << res << endl;
}
