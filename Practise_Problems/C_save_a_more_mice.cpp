#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
// const int N=3e5+5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32
const int N = 400005;
int a[N];
 

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;
    cin>>t;
    while(t--){
        
        int n, k;
    	int i, c = 0, ans = 0;
    	cin >> n >> k;
    	for (i = 1; i <= k; i++) {
    		cin >> a[i];
    	}
    	sort(a + 1, a + k + 1);
    	for (i = k; a[i] > c; i--) {
    		c += n - a[i];
    		ans++;
    	}
    	cout << ans << "\n";
        
    }
}
