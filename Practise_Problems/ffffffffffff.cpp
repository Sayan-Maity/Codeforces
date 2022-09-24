// 1st Problem ==>
// #include <bits/stdc++.h>
// using namespace std;


// int diffSum(int n,int m,int arr[])
// {
//     int mini=0, maxi=0;
//     sort(arr, arr + n);
//     for(int i=0;i<m;i++){
//         mini+=arr[i];
//     }
//     sort(arr, arr + n, greater<int>());
//     for(int i=0;i<m;i++){
//         maxi+=arr[i];
//     }
//     return abs(maxi-mini);
    
// }
// int main() {

// int N = 5, M = 2, A[] = {5, 8, 11, 40, 15};
// cout<<diffSum(N, M, A);
// }





// 2nd Problem ==>
// #include <bits/stdc++.h>
// using namespace std;

// // vector<int> solve(string str, int n)
// int solve(string str, int n)
//     {
//         stack<char>st;
//         vector<int>v;
//         for(int i=0;i<str.length();i++){
//             if(str[i]=='1') st.push(str[i]);
//             else if(str[i]=='0'){
//                 if(st.size()>0){
//                     v.push_back(st.size());
//                     while(!st.empty()) st.pop();
//                 }
//             }
//         }
//         if(st.size()>0) v.push_back(st.size());

//         // return v;
        
//         if(v.size()==0) return 0;
//         int sum=0, sum2=0, size = v.size();
//         bool flag=true;

//         sort(v.begin(), v.end());
//         if(abs(v[0]-v[size-1])>0) flag=false;

//         int s=0, e=size-1;
//         int mid=s+(e-s)/2;

//         if(flag==false){
//             int s=0, e=size-1;
//             // size==odd
//             int mid=s+(e-s)/2;
//             for(int i=0;i<size;i++){
//                 sum+=abs(v[mid]-v[i]);
//             }
//             // size==even
//             int mid2=mid+1;
//             for(int i=0;i<size;i++){
//                 sum2+=abs(v[mid2]-v[i]);
//             }
//             return(size%2==0)? min(sum, sum2) : sum;
            
//         }
//         return 0;
//     }
// int main() {

//     string s = "0";
//     int N = 1;
//     cout<<solve(s, N);

//     // vector<int>res = solve(s, N);
//     // for(auto it: res){
//     //     cout<<it<<" ";
//     // }
    
// }


#include <bits/stdc++.h>
using namespace std;
    #define ll long long
    int solve (int N,vector<int> &A, int X, int K)
    {
        vector<ll>store;
        double cnt=0;
        for(ll i=0;i<A.size()-1;i++){
            store.push_back(abs(A[i]-A[i+1]));
        }
        for(ll i=0;i<store.size();i++){
            if(X>=store[i]){
                X-=store[i];
                cnt++;
            }
            else if(K>0 && X<store[i]){
                i+=2;
                cnt+=2;
                K--;
            }
        }
        return cnt;
    }

int main() {
    int N = 4, X = 2,K = 2;
    vector<int>A = {0, 2, 10};
    cout<<solve(N, A, X, K);
}