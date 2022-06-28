#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    char c, s[100], key[30] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};

    cin >> c >> s;
    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = 0; j < 30; j++)
        {
            if (s[i] == key[j])
            {
                if (c == 'R')
                {
                    s[i] = key[j - 1];
                    break;
                }
                else
                {
                    s[i] = key[j + 1];
                    break;
                }
            }
        }
    }
    cout << s;
}
