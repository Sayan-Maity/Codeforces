#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int n, cnt1 = 0, cnt2 = 0;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 2 == 0)
            cnt2++;
        else
            cnt1++;
    }
    if (cnt1 > cnt2)
    {
        for (int i = 1; i <= n; i++)
        {
            if (a[i] % 2 == 0)
                cout << i;
        }
    }
    else if (cnt2 > cnt1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (a[i] % 2 != 0)
                cout << i;
        }
    }
}
