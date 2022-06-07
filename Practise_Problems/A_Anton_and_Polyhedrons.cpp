#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int t, a = 0, b = 0, c = 0, d = 0, e = 0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "Icosahedron")
            a += 20;
        if (s == "Cube")
            b += 6;
        if (s == "Tetrahedron")
            c += 4;
        if (s == "Octahedron")
            d += 8;
        if (s == "Dodecahedron")
            e += 12;
    }
    cout << a + b + c + d + e;
}