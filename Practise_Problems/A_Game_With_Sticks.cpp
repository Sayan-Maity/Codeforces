#include <iostream>

using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    (a % 2 == 0 || b % 2 == 0 || (a % 2 == 0 && b % 2 == 0)) ? cout << "Malvika" : cout << "Akshat";
}