#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define ll long long

int main()
{

    int c = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> c;
            if (c == 1)
            {
                cout << abs(i - 3) + abs(j - 3) << endl;
            }
        }
    }
}
