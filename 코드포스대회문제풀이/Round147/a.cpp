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
        int ans = 1, cnt = 0;
        rep(i, s.size())
        {
            if (s[i] == '?')
            {
                if (i == 0)
                    ans *= 9;
                else
                    ans *= 10;
                cnt++;
            }
        }
        if (s[0] == '0')
            cout << "0\n";
        else
            cout << ans << '\n';
    }
    return 0;
}