#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int cntD = 0, cntA = 0, i;
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'D')
            cntD++;
        else if (s[i] == 'A')
            cntA++;
    }
    (cntA == cntD) ? cout << "Friendship" : (cntA > cntD) ? cout << "Anton"
                                                          : cout << "Danik";

    return 0;
}
