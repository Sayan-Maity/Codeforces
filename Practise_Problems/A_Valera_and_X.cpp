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
    
    // Write C++ code here
    int n; cin>>n;
    vector<vector<char>> sq(n,vector<char>(n));
    char x,y;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char a; cin>>a;
            sq[i][j]=a;
        }
    }
    //corners should be x and non corners should be y
    if (sq[0][0]==sq[n-1][n-1]){
        x=sq[0][0];
    }else{
          cout<<"NO";
        return 0;
    }
    
    if (sq[0][1]==sq[0][n-2]){
        y=sq[0][1];
    }else{
          cout<<"NO";
        return 0;
    }
    if(x==y){
         cout<<"NO";
        return 0;
    }
   //cout<<x<<" "<<y<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(sq[i][j]!=sq[i][n-j-1]){
                cout<<"NO";
                return 0;
            }
            if(i==j || i==n-j-1){
                if(sq[i][j]!=x){
                    cout<<"NO";
                    return 0;
                }
                
            } 
            if(i!=j && i!=n-j-1){
                if(sq[i][j]!=y){
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
     cout<<"YES";
 
    return 0;
}
