#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, mul = 1, div = 0;
        vector<int> ans;
        cin >> n;
        while (n != 0)
        {
            div = n % 10;
            n /= 10;
            div *= mul;
            mul *= 10;

            if (div == 0)
                continue;
            else
                ans.push_back(div);
        }
        cout << ans.size() << "\n";
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << "\n";
    }
}