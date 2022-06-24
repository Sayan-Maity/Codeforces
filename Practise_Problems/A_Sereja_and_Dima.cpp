#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int n, k = 0, max = 0, play1 = 0, play2 = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (a[i] >= a[j])
        {
            max = a[i];
            i++;
        }
        else
        {
            max = a[j];
            j--;
        }
        if (k % 2 == 0)
            play1 += max;
        else
            play2 += max;
        k++;
    }
    cout << play1 << " " << play2;
}
