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
        int n;
        cin >> n;
        map<string, bool> mp;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]] = true;
        }
        for (int j = 0; j < n; j++)
        {
            string s1, s2;
            bool flag = false;
            for (int i = 1; i < v[j].size(); i++)
            {
                s1 = v[j].substr(0, i);
                s2 = v[j].substr(i, v[j].size() - 1);

                if (mp[s1] && mp[s2])
                {
                    flag = true;
                    break;
                }
            }
            cout << (flag == true) ? 1 : 0;
        }
        cout << "\n";
    }
}
