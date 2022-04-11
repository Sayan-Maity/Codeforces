#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    string s;
    cin >> s;
    int n = s.length(), cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (isupper(s[i]))
            cnt++;
    }
    if (cnt == n || cnt == (n - 1) && islower(s[0]))
    {
        for (int i = 0; i < n; i++)
        {
            if (isupper(s[i]))
                s[i] = tolower(s[i]);
            else
                s[i] = toupper(s[i]);
        }
    }
    cout << s;

    return 0;
}
