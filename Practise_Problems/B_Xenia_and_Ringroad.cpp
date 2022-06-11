#include <iostream>

using namespace std;

int main()
{

    int n, m, i;
    cin >> n >> m;

    int a[m];

    for (i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    long long time = a[0];

    for (i = 0; i < (m - 1); i++)
    {

        if (a[i] > a[i + 1])
        {
            time = time + (n - (a[i] - a[i + 1]));
        }
        else if (a[i] < a[i + 1])
            time = time + a[i + 1] - a[i];
    }

    cout << (time - 1) << endl;

    return 0;
}