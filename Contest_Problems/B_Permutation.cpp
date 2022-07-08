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
        int a, x = a;
        vector<int> v;
        cin >> a;
        if (a > 2)
        {
            for (int i = 2; i <= a - 1; i++)
            {
                v.push_back(i);
            }
            v.push_back(1);
            v.push_back(a);
        }
        else
        {
            v.push_back(1);
            v.push_back(a);
        }
        cout << a << "\n";
        for (int i = 0; i < a; i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
}
