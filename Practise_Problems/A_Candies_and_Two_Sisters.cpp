#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n > 1 && n % 2 == 0)
            cout << (n / 2) - 1 << "\n";
        else if (n > 1 && n % 2 != 0)
            cout << n / 2 << "\n";
        else
            cout << 0 << "\n";
    }
}