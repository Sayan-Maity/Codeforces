#include <iostream>

using namespace std;

int main()
{

    int n, max, min, cnt = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        max = a[0];
        min = a[0];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            cnt++;
            max = a[i];
        }
        if (a[i] < min)
        {
            cnt++;
            min = a[i];
        }
    }
    cout << cnt;
}