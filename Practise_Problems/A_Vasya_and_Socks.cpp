#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, sum = 0, cnt = 0;
    cin >> n >> m;
    int flag = n, temp = m;
    for (int i = 1; i < 100; i++)
    {
        m = i * temp;
        if (flag >= m)
            flag++;
    }
    cout << flag;
}
