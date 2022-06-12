#include <iostream>

using namespace std;

int main()
{
    int n, ans = 0, cnt = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            if (cnt > 0)
                cnt--;
            else
                ans++;
        }
        else
            cnt += a[i];
    }
    cout << ans;
}