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
        if(n%2==0) {
            for(int i=n-2;i>=1;i--){
                cout<<i<<" ";
            }
            cout<<n-1<<" "<<n<<"\n";
        }
        else {
            cout<<1<<" "<<2<<" "<<3<<" ";
            for(int i=n-2;i>=4;i--){
                cout<<i<<" ";
            }
            cout<<n-1<<" "<<n<<"\n";
        }
    }
}






