#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    int t;
    cin >> t;
    int x = 0, y = 0, z = 0;
    int a, b, c;

    while (t--)
    {
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
    (x == 0 && y == 0 && z == 0) ? cout << "YES" : cout << "NO";
}
