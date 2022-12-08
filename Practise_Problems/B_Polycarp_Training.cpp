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
    
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        int ans=0;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            
        }
        sort(arr,arr+n);
        int k=1;
        for(int i=0;i<n;i++) {
            if(arr[i]>=k) {
                k++;
            }
            
        }
        cout<<k-1<<endl;
    }

}
