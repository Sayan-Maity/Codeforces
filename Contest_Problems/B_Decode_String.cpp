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
        string s;
        ll n;
        cin>>n>>s;
        string t="";
        for(ll i=n-1;i>=0;i--) {
          if(s[i]!='0') {
            char ch='a'+(s[i]-'1');
            t+=ch;
          }
          else {
            ll c=(s[i-1]-'0')+10*(s[i-2]-'0');
            char ch='a'+c-1;
            t+=ch;
            i-=2;
          }
        }
        reverse(t.begin(), t.end());
        cout<<t<<endl;
        
    }
}
