#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
const int N=3e5+5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32


int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll n,m;
    cin >> n >> m;
    
    vector<ll>pref(n);
    vector<ll>a(n);
    ll ans1;
    ll ans2;
    for (auto &x : a){
        cin >> x;
    }
    pref[0] = a[0];
    for (int i = 1; i < n; i++){
        pref[i] = pref[i - 1] + a[i];
    }
    while (m--){
        ll b;
        cin >> b;
    
        ans1 = lower_bound(pref.begin(), pref.end(),b) - pref.begin();
        ans2 = !ans1 ? b : b - pref[ans1 - 1];
        cout << ans1 + 1 << ' ' << ans2 << '\n';
    }

}
