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
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            v.push_back(i);
        }
        if (n % 2 == 0)
        {
            for (int i = 0; i < v.size() - 1; i++)
            {
                swap(v[i], v[i + 1]);
            }
        }
        else
        {
            for (int i = 1; i < v.size() - 1; i++)
            {
                swap(v[i], v[i + 1]);
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
}
