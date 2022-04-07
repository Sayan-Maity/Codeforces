#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    int n, cnt = 0;
    cin >> n;
    int a[n];
    int i = 0;
    while (n--)
    {
        cin >> a[i];
        if (a[i] == 1)
            cnt++;
    }
    (cnt > 0) ? cout << "HARD" : cout << "EASY";
}
