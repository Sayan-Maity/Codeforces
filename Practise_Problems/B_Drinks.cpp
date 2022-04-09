#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double sum = 0;
    cin >> n;
    double a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i] / 100;
    }
    double res = (sum / n) * 100;
    cout << res;
    return 0;
}