#include <iostream>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    if (n < m)
    {
        (n % 2 == 1) ? cout << "Akshat" : cout << "Malvika";
    }
    else
    {
        (m % 2 == 1) ? cout << "Akshat" : cout << "Malvika";
    }
}