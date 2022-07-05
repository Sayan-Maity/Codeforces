#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 3e5 + 5;
// upper = 65-90 || lower = 97-122 || (lower-upper) = 32

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, penalty = 0, cnt = 0;
        string s;
        cin >> n >> s;
        stack<int> st;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == ')')
            {
                if (st.empty())
                {
                    penalty++;
                }
                else
                    st.pop();
            }
            else
                st.push(1);
        }
        cout << penalty << "\n";
    }
}
