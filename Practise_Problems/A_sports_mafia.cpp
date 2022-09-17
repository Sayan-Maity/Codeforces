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
    
    long long int n,k;
    scanf("%lld %lld",&n,&k);
    long long int hi = n;
    long long int lo = 0;
    long long int ans;
    
    while(lo<=hi){
        
    	long long int s = lo + (hi-lo)/2;
    	if ( (s*s - (2*n+3)*s + n*n + n - 2*k) == 0) {ans = s; break;}
    	else {
    		int check = s>(2*n+3)/2 ? 1:0;
    
    		if (check && ((s*s - (2*n+3)*s + n*n + n - 2*k) < 0)) lo = s+1; 
    		else if (!check && ((s*s - (2*n+3)*s + n*n + n - 2*k) < 0)) hi = s-1;
    		else if(check && ((s*s - (2*n+3)*s + n*n + n - 2*k) > 0)) hi = s-1;
    		else lo = s+1; 
    	}
    }
    printf("%lld\n",ans);
}
