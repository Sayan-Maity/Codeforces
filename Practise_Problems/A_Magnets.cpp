#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    int n, cnt = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[i + 1])
            cnt++;
    }
    cout << cnt;
}
