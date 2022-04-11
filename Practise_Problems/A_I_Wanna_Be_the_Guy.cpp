#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    int n, i, p, q, a, b;
    cin >> n;
    set<int> s;
    cin >> p;
    while (p--)
    {
        cin >> a;
        s.insert(a);
    }
    cin >> q;
    while (q--)
    {
        cin >> b;
        s.insert(b);
    }
    (s.size() == n) ? cout << "I become the guy." : cout << "Oh, my keyboard!";
    cout << endl;

    return 0;
}
