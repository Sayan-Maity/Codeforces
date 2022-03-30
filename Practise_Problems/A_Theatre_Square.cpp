#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, a, res;
    cin >> n >> m >> a;
    res = (n % a == 0) ? n / a : ((n / a) + 1);
    res *= (m % a == 0) ? m / a : ((m / a) + 1);
    cout << res << endl;
    return 0;
}