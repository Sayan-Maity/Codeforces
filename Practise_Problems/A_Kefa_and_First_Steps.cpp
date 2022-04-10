#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    int n, cnt = 1, max = 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
            cnt++;
            if (cnt > max)
                max = cnt;
        }
        else
            cnt = 1;
    }
    cout << max;
}
