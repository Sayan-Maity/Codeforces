#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int x1=n, x2=n-1;
        cout<<2<<endl;
        while(x2)
        {
            int r=ceil((x1+x2)/2.0);
            cout<<x1<<" "<<x2<<endl;
            x1=r;
            x2--;
        }
    }
}
