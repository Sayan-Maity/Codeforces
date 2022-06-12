#include <iostream>

using namespace std;

int main()
{
    int a, b, res = 0, cnt = 0;
    cin >> a >> b;
    int var = 240 - b;
    int i = 1;
    while (a--)
    {
        res += 5 * i;
        cnt++;
        i++;
        if (res > var)
        {
            cnt--;
            break;
        }
    }
    cout << cnt;
}