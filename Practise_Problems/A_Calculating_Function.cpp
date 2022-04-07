#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ll a;
    cin >> a;
    (a % 2 == 0) ? cout << a / 2 : cout << -(a + 1) / 2;
    cout << endl;
}
