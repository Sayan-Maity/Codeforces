#include <bits/stdc++.h>
using namespace std;

#define ll long long
// ASCII Uppercase 65-90
// ASCII Lowercase 97-122

int main()
{

    ll a;
    cin >> a;
    (a % 2 == 0) ? cout << a / 2 : cout << -(a + 1) / 2;
    cout << endl;
}
