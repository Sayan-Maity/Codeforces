#include <bits/stdc++.h>
using namespace std;

#define ll long long

void reverseStr(string &s)
{
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        swap(s[i], s[n - i - 1]);
    }
}

int main()
{
    string s, t;
    cin >> s >> t;
    reverseStr(s);
    (s == t) ? cout << "YES" : cout << "NO";
    cout << endl;
}
