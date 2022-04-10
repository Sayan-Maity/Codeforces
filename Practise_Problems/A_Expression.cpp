#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    int a, b, c, maxi = 0;
    cin >> a;
    cin >> b;
    cin >> c;

    int p[6];
    p[0] = a + b + c;
    p[1] = a * b * c;
    p[2] = (a + b) * c;
    p[3] = (a * b) + c;
    p[4] = a * (b + c);
    p[5] = a + (b * c);

    sort(p, p + 6);
    cout << p[5];
}
