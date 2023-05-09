#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ok = 0, cnt = 0, ans = -1;
    rep(i, n)
    {
        if (s[i] == 'o')
        {
            ok = 1;
            cnt++;
        }
        else if (ok)
        {
            ans = max(ans, cnt);
            ok = 0;
            cnt = 0;
        }
    }
    cnt = 0;
    rep(i, n)
    {
        if (s[n - 1 - i] == 'o')
        {
            ok = 1;
            cnt++;
        }
        else if (ok)
        {
            ans = max(ans, cnt);
            ok = 0;
            cnt = 0;
        }
    }
    cout << ans << '\n';
    return 0;
}