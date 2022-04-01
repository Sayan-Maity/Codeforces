#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int x;
    cin >> x;
    if (x >= 5 && (x % 5 == 0))
        cout << (x / 5);
    if (x >= 5 && ((x % 5 == 4) || (x % 5 == 3) || (x % 5 == 2) || (x % 5 == 1)))
        cout << (x / 5) + 1;
    else if (x == 4 || x == 3 || x == 2 || x == 1)
        cout << 1;
}
