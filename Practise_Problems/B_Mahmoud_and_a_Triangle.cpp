#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, cnt = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 2; i++)
    {
        if ((v[i] + v[i + 1]) > v[i + 2])
        {
            cnt = 1;
            break;
        }
        else
            continue;
    }
    (cnt == 1) ? cout << "YES" : cout << "NO";
}