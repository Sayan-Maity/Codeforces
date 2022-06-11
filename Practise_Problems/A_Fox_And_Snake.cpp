#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            if (i % 4 == 0)
                cout << "#" << string(m - 1, '.') << "\n";
            else
                cout << string(m - 1, '.') << '#' << "\n";
        }
        else
            cout << string(m, '#') << "\n";
    }
}
