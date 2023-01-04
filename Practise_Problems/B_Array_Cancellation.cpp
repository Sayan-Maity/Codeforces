#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    long long cur = 0;
    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        cur = max(0LL, cur + x);
    }
    cout << cur << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1 ;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        // cout << "Case #" << i << ":";
        solve();
    }
    return 0;
}