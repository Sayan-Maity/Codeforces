#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    string r, s, pile;
    cin >> r >> s >> pile;

    string final = r + s;

    sort(final.begin(), final.end());
    sort(pile.begin(), pile.end());

    (s.length() + r.length() == pile.length() && (final == pile)) ? cout << "YES" : cout << "NO";
}