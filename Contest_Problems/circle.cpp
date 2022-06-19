#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int inda = 0, indb = 0, minia = INT_MAX, minib = INT_MAX;
        for (int i = 0; i < n; i += 2)
        {
            if (a[i] < minia)
            {
                minia = a[i];
                inda = i;
            }
            if (a[i + 1] < minib)
            {
                minib = a[i + 1];
                indb = i + 1;
            }
        }
        if (n % 2 != 0)
            cout << "Mike"
                 << "\n";
        else
        {
            if (minia == minib)
            {
                if (inda < indb)
                    cout << "Joe"
                         << "\n";
                else
                    cout << "Mike"
                         << "\n";
            }
            else if (minia < minib)
                cout << "Joe"
                     << "\n";
            else
                cout << "Mike"
                     << "\n";
        }
    }
}
