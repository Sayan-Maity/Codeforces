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
    
    ll t;
    cin>>t;
    while(t--){
        
        
        ll n ;
        cin >> n ;
        
        ll x[n], y[n], arr[n] ;
        for(ll i = 0; i < n; i++) cin >> x[i] ;
        for(ll i = 0; i < n; i++) cin >> y[i] ;
        for(ll i = 0; i < n; i++)  arr[i] = y[i]-x[i] ;
        
        sort(arr, arr+n) ;
        ll i = 0, j = n-1, ans = 0 ;
        while(i < j) {
            ll curr = arr[i] + arr[j] ;
            if (curr >= 0) {
                i ++ ;
                j -- ;
                ans ++ ;
            }
            else if (curr < 0) i++;
        }
        cout << ans << endl ;
        
    }
}