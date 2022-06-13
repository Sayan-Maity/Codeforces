#include <iostream>

using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    int res = (max(a, b) - min(a, b)) / 2;
    cout << min(a, b) << " " << res;
}