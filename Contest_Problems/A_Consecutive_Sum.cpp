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
        
        int n,k;
        cin>>n>>k;
        vector<int> v;
        long long arr[101];
        for (int i = 1; i < n+1; ++i) {
            cin>>arr[i];
        }
        for(int i=0;i<k;i++){
            long long k1=0;
            for(int j=1;j<n+1;j++){
                if(j%k==i){
                    k1=max(arr[j],k1);
                }
            }
            v.push_back(k1);
        }
        long long sum=0;
        for(int x:v){
        sum=sum+x;
        }
        cout<<sum<<endl;
        
        
    }
}
