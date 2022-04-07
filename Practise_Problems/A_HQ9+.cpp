#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int cnt = 0;
    string p;
    cin >> p;
    for (int i = 0; i < p.length(); i++)
    {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
            cnt++;
    }
    (cnt > 0) ? cout << "YES" : cout << "NO";
}
