#include <bits/stdc++.h>
using namespace std;

#define ll long long
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int one = 0, two = 0, three = 0;
    vector<int> on;
    vector<int> to;
    vector<int> tr;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            on.push_back(i + 1);
            one++;
        }
        if (a[i] == 2)
        {
            to.push_back(i + 1);
            two++;
        }
        if (a[i] == 3)
        {
            tr.push_back(i + 1);
            three++;
        }
    }
    int mini = min({one, two, three});
    cout << mini << "\n";
    for (int i = 0; i < mini; i++)
    {
        cout << on[i] << " " << to[i] << " " << tr[i] << "\n";
    }
}
