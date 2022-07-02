#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, cnt = 0;
    cin >> x;
    while (x)
    {
        if (x % 1000 == 144)
            x /= 1000;
        else if (x % 100 == 14)
            x /= 100;
        else if (x % 10 == 1)
            x /= 10;
        else
        {
            cnt = 1;
            break;
        }
    }
    (cnt == 0) ? cout << "YES" : cout << "NO";
}
