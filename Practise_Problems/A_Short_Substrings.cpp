#include <bits/stdc++.h>
using namespace std;
#define ll long long // upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << s[0];
        for (int i = 1; i < s.size(); i += 2)
        {
            cout << s[i];
        }
        cout << s[s.size()] << "\n";
    }
}
//
//
// <=====  Second Method  =====>
//
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long // upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (i % 2 != 0 || i == 0)
                cout << s[i];
        }
        cout << "\n";
    }
}