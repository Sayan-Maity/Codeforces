//
//<<<<<<<<<<<<< Method-1 >>>>>>>>>>>>>
//
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    int n, h, p, cnt = 0;
    cin >> n >> h;
    int g = n;
    while (n--)
    {
        cin >> p;
        if (p > h)
            cnt++;
    }
    cout << abs(g - cnt) + (cnt * 2) << endl;

    return 0;
}

//
//<<<<<<<<<<<<< Method-2 >>>>>>>>>>>>>
//
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    int n, h, p, sum = 0;
    cin >> n >> h;
    while (n--)
    {
        cin >> p;
        if (p > h)
            sum += 2;
        else
            sum++;
    }
    cout << sum << endl;

    return 0;
}
