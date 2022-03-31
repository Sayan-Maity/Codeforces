#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    int sum = 0;
    int a, b, c;

    while (t--)
    {
        cin >> a >> b >> c;
        sum += a + b + c;
    }
    (sum == 0) ? cout << "YES" : cout << "NO";
}
