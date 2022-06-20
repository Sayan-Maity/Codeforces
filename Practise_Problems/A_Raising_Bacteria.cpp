#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int x, cnt = 0;
    cin >> x;
    while (x > 1)
    {
        if (x % 2 == 1)
            cnt++;
        x /= 2;
    }
    cout << cnt + 1;
}
