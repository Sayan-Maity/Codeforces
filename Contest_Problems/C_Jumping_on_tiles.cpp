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
    
    ll t;
    cin>>t;
    while(t--){

        string s;
        cin>>s;
        //map<int,int>m;
        vector< pair<int,int>>p;
        for(int i=1;i<s.length()-1;i++){
            if((s[0]<=s[s.length()-1] && s[i]>=s[0] && s[i]<=s[s.length()-1]) || (s[0]>s[s.length()-1] && s[0]>=s[i] && s[i]>=s[s.length()-1]))
            p.push_back({s[i]-'a'+1,i});
        }
        int res1= abs(s[s.length()-1]-s[0]);
        sort(p.begin(),p.end());
        vector<int>v;
        v.push_back(0);
         int count=2;
        if(s[0]<=s[s.length()-1]){
           
            for(int i=0;i<p.size();i++){
                v.push_back(p[i].second);
                count++;
            }
        }
        else{
            for(int i=0;i<p.size();i++){
                v.push_back(p[p.size()-1-i].second);
                count++;
            }
        }
        cout<<res1<<" "<<count<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]+1<<" ";
        }
        v.push_back(s.size()-1);
        cout<<v[v.size()-1]+1<<endl;


    }
}