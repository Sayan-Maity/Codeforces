// <<<<<<<<<<<< Method-1 >>>>>>>>>>>>>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    int y;
    cin >> y;
    while (true)
    {
        y = y + 1;
        int a = y / 1000;
        int b = y / 100 % 10;
        int c = y / 10 % 10;
        int d = y % 10;

        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << y << endl;

    return 0;
}

// <<<<<<<<<<<< Method-2 >>>>>>>>>>>>>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    int y;
    string s;
    cin >> y;
    while (true)
    {
        y++;
        s = to_string(y);
        if (s[0] != s[1] && s[1] != s[2] && s[2] != s[3] && s[1] != s[3] && s[0] != s[2] && s[2] != s[3])
        {
            cout << s << endl;
            break;
        }
    }
    return 0;
}
