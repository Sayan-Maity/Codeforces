#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{

    ll n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        (i % 2 == 1) ? cout << "I hate " : cout << "I love ";
        if (i != n)
            cout << "that ";
    }
    cout << "it";
}