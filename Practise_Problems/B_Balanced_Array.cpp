#include <bits/stdc++.h>
using namespace std;
#define ll long long // upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int t;
    long long int n, sum1, sum2, d, i, j;
    cin >> t;
    while (t--)
    {
        sum1 = sum2 = 0;
        cin >> n;

        if (n % 4 != 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            for (int i = 2; i <= n; i += 2)
            {
                cout << i << " ";
                sum1 += i;
            }
            for (int i = 1; i < n - 2; i += 2)
            {
                cout << i << " ";
                sum2 += i;
            }
            cout << sum1 - sum2 << "\n";
        }
    }
}