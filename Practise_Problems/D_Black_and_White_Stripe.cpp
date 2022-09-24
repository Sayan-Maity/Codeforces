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
        int k,n;
        string s;
        cin>>n>>k;
        cin>>s;
        int sum =0;
        for(int i=0;i<k;i++)if(s[i]=='W') sum++;
        int mini = sum;
        for(int i=k;i<n;i++){
            
            if(s[i]=='W')sum++;
            if(s[i-k]=='W')sum--;
 
            mini = min(sum,mini);
        }
        cout<<mini<<endl;
    
        
    }
}
