#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int n, a = 0;
    cin >> n;
    a = n / 100;
    n = n % 100;
    a += n / 20;
    n = n % 20;
    a += n / 10;
    n = n % 10;
    a += n / 5;
    n = n % 5;
    a += n;
    cout << a;
}