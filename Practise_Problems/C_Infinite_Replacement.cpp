#include <bits/stdc++.h>
using namespace std;

using ll = long long;
 
void solve()
{
	string s, t;
	cin >> s >> t;
 
	if (t == "a") {
		cout << "1\n";
		return;
	}
 
	for (char c : t) {
		if (c == 'a') {
			cout << "-1\n";
			return;
		}
	}
 
	ll ans = 1;
	
	for (int i=0; i<s.size(); i++)
		ans *= 2;
	cout << ans << "\n";
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
 
	while (t--)
        // cout << "Case #" << i << ":";
        solve();
 
	return 0;
}