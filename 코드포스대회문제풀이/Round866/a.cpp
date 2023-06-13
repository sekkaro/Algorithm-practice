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
        int ans = 0;
        int n = s.size();
        rep(i, n)
        {
            if (s[i] == '_')
            {
                if (i == 0 || i == n - 1)
                    ans++;
                if (i < n - 1 && s[i + 1] == '_')
                    ans++;
            }
        }
        if (n == 1)
        {
            if (s[0] == '_')
                cout << "2\n";
            else
                cout << "1\n";
        }
        else
            cout << ans << '\n';
    }
    return 0;
}