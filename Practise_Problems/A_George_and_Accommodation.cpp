#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, cnt = 0;
    int a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (b - a >= 2)
            cnt++;
    }
    cout << cnt;
}