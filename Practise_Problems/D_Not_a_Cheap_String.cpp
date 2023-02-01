#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
const int N=3e5+5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int a[300];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;
    cin>>t;
    while(t--){
        
        string s;int m;
        cin>>s>>m;
        memset(a,0,sizeof a);
        for(auto i:s) {
            a[i]++;
            m-=(i-'a'+1);
        }
        for(int i='z';i>='a';i--){
            while(a[i] && m<0){
                m+=i-'a'+1;
                a[i]--;
            }
        }
        for(auto i:s){
            if(a[i]) {
                a[i]--;
                cout<<i;
            }
        }
        cout<<endl;
        
    }
}
