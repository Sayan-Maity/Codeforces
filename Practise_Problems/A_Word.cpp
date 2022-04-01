#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int i, cnta = 0, cntA = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            cntA++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            cnta++;
    }
    if (cnta > cntA || cntA == cnta)
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    else if (cntA > cnta)
        transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s;
}
