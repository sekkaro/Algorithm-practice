#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();
    int r = -1;
    rep(i, m)
    {
        if (s[n - i - 1] != t[m - i - 1] && s[n - i - 1] != '?' && t[m - i - 1] != '?')
        {
            r = m - i - 1;
            break;
        }
    }
    int ok1 = 1, ok2 = 0;
    rep(i, m + 1)
    {
        if (i > 0 && s[i - 1] != t[i - 1] && s[i - 1] != '?' && t[i - 1] != '?')
            ok1 = 0;
        if (i > r)
            ok2 = 1;
        if (ok1 && ok2)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}