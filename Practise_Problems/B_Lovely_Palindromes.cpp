#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string n;
    cin >> n;
    string a = n;
    cout << a;
    for (int i = n.length() - 1; i >= 0; --i)
        cout << n[i];
}
