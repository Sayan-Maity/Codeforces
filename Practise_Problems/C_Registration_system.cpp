#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    map<string, int> mp;
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        mp[s]++;
        auto it = mp.find(s);
        if ((*it).second > 1)
        {
            cout << (*it).first << (*it).second - 1 << '\n';
        }
        else
        {
            cout << "OK"
                 << "\n";
        }
    }
}
//
//
// This is simple solution
//
//
#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    map<string, int> mp;
    string s;
    int n;
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (mp.count(s) == 0)
        {
            cout << "OK"
                 << "\n";
            mp[s]++;
        }
        else
        {
            cout << s << mp[s] << "\n";
            mp[s]++;
        }
    }
}
