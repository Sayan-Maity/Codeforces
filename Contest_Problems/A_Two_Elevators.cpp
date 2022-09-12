#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
const int N=3e5+5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;
    cin>>t;
    while(t--){
        
        ll a, b, c;
        cin>>a>>b>>c;
        ll ca=abs(a-1);
        ll cb=(abs(b-c))+(abs(c-1));
        if(ca==cb) cout<<3<<"\n";
        else if(ca<cb) cout<<1<<"\n";
        else cout<<2<<"\n";
    }
}