#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    string a, b;
    cin >> a >> b;
    string res[a.length()];
    for (int i = 0; i < a.length(); i++)
    {
        (a[i] == b[i]) ? res[i] = '0' : res[i] = '1';
    }
    for (int i = 0; i < a.length(); i++)
    {
        cout << res[i];
    }
}
