#include <bits/stdc++.h>
using namespace std;

void printStackAllElements(stack<int> stk2)
{
    while (!stk2.empty())
    {
        cout << stk2.top() << endl;
        stk2.pop();
    }
}
int main()
{
    stack<int> stk;
    stk.push(3);
    stk.push(5);
    stk.push(7);
    stk.pop();
    // stk.pop();
    // stk.pop();
    // stk.pop();
    // (stk.empty()) ? cout << "Yes, my stack is empty"
    //                      << " "
    //                      << ", size is: " << stk.size() << endl
    //               : cout << "No, my stack is not empty"
    //                      << " "
    //                      << ", size is: " << stk.size() << endl;
    printStackAllElements(stk);
}