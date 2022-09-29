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
        int n, m;
        cin>>n>>m;
        if((n<4 && n>=2) && (m<4 && m>=2)) cout<<2<<" "<<2<<"\n";
        else if(n<2 && m<2) cout<<1<<" "<<1<<"\n";
        else cout<<1<<" "<<1<<"\n";
      
        
    }
}
