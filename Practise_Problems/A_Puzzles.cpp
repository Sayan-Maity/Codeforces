#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int n, m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++)
        cin >> a[i];

    sort(a, a + m);
    int least = a[n - 1] - a[0];

    for (int i = 1; i <= m - n; ++i)
    {
        if (a[i + n - 1] - a[i] < least)
            least = a[i + n - 1] - a[i];
    }
    cout << least << "\n";
}
