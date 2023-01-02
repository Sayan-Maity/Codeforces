#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--) {

        int n,a;
        cin>>n>>a;
        vector<int>vec(n);
        for(int i=0;i<n;i++) cin>>vec[i];
        a--;
        int l=a-1, r=a+1, ans=0;
        if(vec[a]==1) ans++;
        while(r<n && l>=0) {
            if(vec[l]==1 && vec[r]==1) ans+=2;
            l--;
            r++;
        }
        while(l>=0) {
            if(vec[l]==1) ans++;
            l--;
        }
        while(r<n) {
            if(vec[r]==1) ans++;
            r++;
        }

        cout<<ans;
        
    // }
}
