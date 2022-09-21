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
    
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &i: v){
        cin>>i;
    }
    if(n==2) cout<<"0"<<endl;
    else if(n%2==0) cout<<(n-1)/2<<endl;
    else cout<<n/2<<endl;
    
    sort(v.begin(),v.end());
    for(ll i=1;i<n;i+=2) {
        cout<<v[i]<<" "<<v[i-1]<<" ";
    }
    if(n%2!=0) cout<<v[n-1]<<endl;
    
}
