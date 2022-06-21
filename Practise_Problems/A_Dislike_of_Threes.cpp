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
        vector<int> v;
        for (int i = 1; i <= 2000; i++)
        {
            if (i % 3 != 0 && i % 10 != 3)
                v.push_back(i);
        }
        cout << v[n - 1] << "\n";
    }
}
