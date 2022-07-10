#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {

        ll int n, k;
        cin >> n >> k;
        ll int temp = k / n;
        if (k >= n)
        {
            if (k % n != 0)
                temp++;
            cout << temp << endl;
        }
        else
        {
            ll int remp = n / k;
            if ((n % k) != 0)
                remp++;
            k = remp * k;
            ll int found = k / n;
            if (k % n != 0)
                found++;
            cout << found << endl;
        }
    }
}
