#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    // The approach is only if the frequency of lucky digits are equal to 4 or 7 then only the number is lucky
    int i, cnt = 0;
    string n;
    cin >> n;
    ll sz = n.length();
    for (int i = 0; i < sz; i++)
    {
        if (n[i] == '4' || n[i] == '7')
            cnt++;
    }
    (cnt == 7 || cnt == 4) ? cout << "YES" : cout << "NO";

    return 0;
}
