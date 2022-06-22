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
        int n;
        cin >> n;
        for (int k = 2; k < 10e9; k++)
        {
            int p = pow(2, k) - 1;
            if (n % p == 0)
            {
                cout << n / p << "\n";
                break;
            }
        }
    }
}
