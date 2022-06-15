#include <bits/stdc++.h>
using namespace std;
#define ll long long // upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    int n, m, a, b, x = 0;
    cin >> n >> m >> a >> b;
    (n % m == 0) ? x = (n / m) *b : x = (((n / m) + 1) * b);
    cout << min({(x), (a * n), (((n / m) * b) + ((n % m) * a))});
}