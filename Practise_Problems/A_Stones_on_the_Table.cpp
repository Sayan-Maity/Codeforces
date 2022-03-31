#include <bits/stdc++.h>
using namespace std;
#include <set>

#define ll long long

int main()
{
    int n;
    string s;
    int cnt = 0;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
            cnt++;
    }
    cout << cnt << endl;
}
