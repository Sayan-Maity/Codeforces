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
        int n, cnt = 0, a = 0;
        cin >> n;
        while (n > 0)
        {
            a = n % 10;
            n /= 10;
            cnt++;
        }
        if (cnt == 1)
            cout << ((a - 1) * 10) + 1 << "\n";
        else if (cnt == 2)
            cout << ((a - 1) * 10) + 3 << "\n";
        else if (cnt == 3)
            cout << ((a - 1) * 10) + 6 << "\n";
        else
            cout << ((a - 1) * 10) + 10 << "\n";
    }
}
