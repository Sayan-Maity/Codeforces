#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int l, b;
        cin >> l >> b;
        if (l > b)
        {
            if (l > (2 * b) || l == (2 * b))
                cout << l * l << "\n";
            else
                cout << (2 * b) * (2 * b) << "\n";
        }
        else if (b > l)
        {
            if (b > (2 * l))
                cout << b * b << "\n";
            else
                cout << (2 * l) * (2 * l) << "\n";
        }
        else
            cout << (l * 2) * (l * 2) << "\n";
    }
}
