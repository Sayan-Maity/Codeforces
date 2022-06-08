#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    int n, l, maxdist = -1;
    cin >> n >> l;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 1; i < n; ++i)
    {
        int x = arr[i] - arr[i - 1];
        maxdist = max(x, maxdist);
    }
    long double mx2 = (long double)maxdist / 2;
    long double mx1 = (long double)max(arr[0] - 0, l - arr[n - 1]);
    (mx2 > mx1) ? cout << mx2 : cout << mx1;
}
