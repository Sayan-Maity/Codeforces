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
        int n;
        cin>>n;
        vector<int>v(n);
        int maxi=INT_MIN, maxId=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            if(maxi<v[i]){
                maxi=v[i];
                maxId=i;
            }
        }
        cout<<maxId+1<<"\n";
    }
}
