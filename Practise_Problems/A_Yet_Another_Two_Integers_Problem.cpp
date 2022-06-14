#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, cnt = 0;
        cin >> a >> b;
        while (a != b)
        {
            if (b > a)
            {
                if (b - a >= 10)
                {
                    a += 10;
                    cnt++;
                }
                else if (b - a < 10)
                {
                    a += (b - a);
                    cnt++;
                }
            }
            else if (b < a)
            {
                if (a - b >= 10)
                {
                    a -= 10;
                    cnt++;
                }
                else if (a - b < 10)
                {
                    a -= (a - b);
                    cnt++;
                }
            }
            else if (b == a)
                cnt = 0;
        }
        cout << cnt << "\n";
    }
}
