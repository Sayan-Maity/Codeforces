#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int cnt=0, sum=0;
    for(auto it: v) sum+=it;
    for(int i=1;i<=5;i++) {
        if((i+sum)%(n+1) != 1) cnt++;
    }
    cout<<cnt;

}