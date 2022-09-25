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
        int n, c;
        cin>>n>>c;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        
        map<int, int>mp;
        for(auto it: v){
            mp[it]++;
        }
        int maxi=0;
        for(auto it: mp){
            if((c)>(it.second)) maxi+=it.second;
            else maxi+=c;
        }
        cout<<maxi<<"\n";

        
    }
}