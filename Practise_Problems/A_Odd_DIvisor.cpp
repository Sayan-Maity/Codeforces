#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        while (n % 2 == 0)
            n /= 2;
        (n > 1) ? cout << "YES" : cout << "NO";
        cout << "\n";
    }
}
//
//
//
//
//
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;long long a;
for(int i=1;i<=n;++i){
cin>>a;
while(a%2==0){a=a/2;}
if(a==1)cout<<"NO"<<endl;else cout<<"YES"<<endl;}}
*/
//
//
//
//
//
//
/*
void hi()
{
    ll n;cin>>n;
    if(n&(n-1)){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll t;cin>>t;while(t--) hi();
    return 0;
}
*/