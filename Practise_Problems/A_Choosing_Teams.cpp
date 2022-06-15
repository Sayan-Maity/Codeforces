#include <bits/stdc++.h>
using namespace std;
#define ll long long

// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    int n, b, cnt = 0;
    cin >> n >> b;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int tar = (5 - b);
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= tar)
            cnt++;
    }
    cout << cnt / 3;
}