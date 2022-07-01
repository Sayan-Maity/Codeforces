#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int a, sum = 0, last = 9;
        vector<int> ans;
        cin >> a;
        while (sum < a && last >= 1)
        {
            ans.push_back(min(a - sum, last));
            sum += last;
            last--;
        }
        if (sum < a)
            cout << -1 << "\n";
        else
        {
            reverse(ans.begin(), ans.end());
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i];
            }
            cout << "\n";
        }
    }
}
