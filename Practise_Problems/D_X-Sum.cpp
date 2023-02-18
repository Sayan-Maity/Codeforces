#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--) {
        ll n , m , ans = 0  ; cin >> n >> m ; 
        vector<vector<int>>a(n , vector<int>(m)); 
        for(int i = 0 ; i < n ; ++i)
        for(int j = 0 ; j < m ; ++j) cin >> a[i][j] ; 
        
        for(int i = 0 ; i < n ; ++i){
                for(int j = 0 ; j < m ; ++j){
                            ans = max(ans , search(i , j , a)) ; 
                }
        }
        cout << ans << endl ;
    }






}


/*

1
4 4
1 2 2 1
2 4 2 4
2 2 3 1
2 4 2 4

*/