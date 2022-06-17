#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;

    sort(a.begin(), a.end());

    int m;
    cin >> m;
    while (m--)
    {
        int b;
        cin >> b;
        // for(auto it: a) ans = upper_bound(a.begin(), a.end(), b)-a.begin();
        // cout<<ans<<"\n";
        auto it = upper_bound(a.begin(), a.end(), b) - a.begin();
        cout << it << "\n";
    }
}
