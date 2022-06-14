#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int i, k, a, b, t, z, count;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a == b)
            count = 0;
        else if (a < b)
        {
            z = b - a;
            if (z > 10)
            {
                if (z % 10 == 0)
                    count = z / 10;
                else
                    count = z / 10 + 1;
            }
            else
                count = 1;
        }
        else
        {
            z = a - b;
            if (z > 10)
            {
                if (z % 10 == 0)
                    count = z / 10;
                else
                    count = z / 10 + 1;
            }
            else
                count = 1;
        }
        cout << count << endl;
    }
}
