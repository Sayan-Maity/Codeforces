#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define ll long long
#define MOD 1000000007
#define all(v) v.begin(),v.end()
const int N=3e5+5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32


adj;
vector<int>sub;
void dfs(int v, int par = 0) {
    sub[v] = 1;
    for (int i : adj[v]) {
        if (i == par) continue;
        dfs(i, v);
        sub[v] += sub[i];
    }
}
int counter = 0;
void dfsCount(int v = 1, int par = 0) {
    counter += (v != 1 && sub[v] % 2 == 0);
    for (int u : adj[v])
        if (u != par)
            dfsCount(u, v);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    adj.resize(n + 1);
    sub.resize(n + 1);

    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    if (n % 2) {
        cout << -1;
        return 0;
    }

    dfs(1);
    dfsCount();
    cout << counter << endl;
}