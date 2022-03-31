#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define ll long long

int main()
{
    int i;
    string s, r;
    cin >> s >> r;

    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
        r[i] = tolower(r[i]);
    }
    if (s == r)
    {
        cout << "0" << endl;
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if ((s[i] - r[i]) < 0)
            {
                cout << "-1";
                break;
            }
            else if ((s[i] - r[i]) > 0)
            {
                cout << "1";
                break;
            }
        }
    }

    // int res = 0;
    // string r, s;
    // cin >> r >> s;

    // for (int i = 0; i < r.length(); i++)
    // {
    //     if (r[i] - s[i] == 32)
    //         res = 0;
    //     else if ((r[i] - s[i]) < 0 && r[i] - s[i] != 32)
    //         res = -1;
    //     else if ((r[i] - s[i]) > 0 && r[i] - s[i] != 32)
    //         res = 1;
    // }
    // cout << res << endl;
}
