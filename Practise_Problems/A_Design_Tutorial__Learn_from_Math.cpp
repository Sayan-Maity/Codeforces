#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int a;
    cin >> a;
    (a % 2 == 0) ? cout << 4 << " " << a - 4 : cout << 9 << " " << a - 9;
}
