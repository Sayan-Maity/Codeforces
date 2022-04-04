#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n, p;
    string s;
    cin >> n >> p;
    cin >> s;

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                swap(s[j], s[j + 1]);
                j++;
            }
        }
    }
    cout << s;
}
