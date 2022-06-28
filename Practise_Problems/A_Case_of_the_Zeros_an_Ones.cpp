#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, cnt0 = 0, cnt1 = 0;
    cin >> n;
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '0')
            cnt0++;
        if (a[i] == '1')
            cnt1++;
    }
    cout << n - (2 * min({cnt0, cnt1}));
}
