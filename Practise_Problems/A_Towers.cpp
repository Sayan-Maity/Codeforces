#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--) {
        unordered_map<int, int>mpp;
        int n;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++) cin>>vec[i];
        for(auto it: vec) mpp[it]++;
        int size=mpp.size();

        priority_queue<pair<int, int>>pq;
        for(auto it: mpp) pq.push({it.second, it.first});
        int top = pq.top().first;

        cout<<top<<" "<<size;
    // }
}
