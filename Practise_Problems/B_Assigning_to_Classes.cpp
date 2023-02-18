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
 
    cin >> t;
 
    while(t--){
 
        int n;
 
        cin >> n;
 
        int arr[2*n];
 
        for(int i=0;i<2*n;i++){
 
            cin >> arr[i];
 
        }
 
        sort(arr,arr+2*n);
 
        // if(n%2==1){
 
        //     return arr[n-1] - arr[n/2];
 
        // }else{
 
            cout << abs(arr[n-1] - arr[n]) << endl;
 
        // }
 
    }

}