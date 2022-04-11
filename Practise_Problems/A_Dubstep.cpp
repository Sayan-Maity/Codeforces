//
// <<<<<<<<<<<<<<<<< Process-1 >>>>>>>>>>>>>>>>>
//
#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            if (i != 0)
            {
                cout << " ";
            }
            i += 2;
        }
        else
            cout << s[i];
    }

    return 0;
}
//
// <<<<<<<<<<<<<<<<< Process-2 >>>>>>>>>>>>>>>>>
//
#include <bits/stdc++.h>
using namespace std;

using namespace std;

int main()
{

    string name;
    int cnt = 0;
    cin >> name;
    name = name;
    for (int i = 0; i < name.length(); i++)
    {

        if (name[i] == 'W' && name[i + 1] == 'U' && name[i + 2] == 'B')
        {
            i += 2;
            if (cnt)
            {
                cout << " ";
            }
            cnt = 0;
        }

        else
        {
            cnt = 1;

            cout << name[i];
        }
    }
}