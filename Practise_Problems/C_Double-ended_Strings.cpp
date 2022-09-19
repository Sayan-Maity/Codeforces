#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define all(v) v.begin(),v.end()
const int N=3e5+5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32


void solve(){
    string a,b;
    cin>>a>>b;
    int res=0;
    int n=a.size(),m=b.size();
    for(int i=min(n,m);i>=1;i--){
        for(int j=0;j<=n-i;j++){
            string tmp = a.substr(j,i);
            //cout<<tmp<<endl;
            if(b.find(tmp)!=string::npos){
                cout<<n+m-i*2<<endl;
                return ;
            }
        }
    }
    cout<<n+m<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int Tc;
    if(1){
        cin>>Tc;
        while(Tc--)
            solve();
    }
    else{
        solve();
    }
}
