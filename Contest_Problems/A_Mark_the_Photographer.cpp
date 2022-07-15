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

    int t;
    string s;
    cin >> t;
    while (t--)
    {
        int n, x, cnt = 0;
        cin >> n >> x;
        n *= 2;
        vector<int> a(n);
        vector<int> first;
        vector<int> second;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            (i < n / 2) ? first.push_back(a[i]) : second.push_back(a[i]);
        }
        for (int i = 0; i < n / 2; i++)
        {
            if ((first[i] + x) <= second[i])
                cnt++;
        }
        (cnt == (n / 2)) ? cout << "YES" : cout << "NO";
        cout << "\n";
    }
}
