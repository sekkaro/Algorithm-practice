#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        rep(i, n)
        {
            if (s[i] == '?')
            {
                if (i == 0 || s[i - 1] == '0')
                    s[i] = '0';
                else
                    s[i] = '1';
            }
        }
        cout << s << '\n';
    }
    return 0;
}