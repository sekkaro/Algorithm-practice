#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, d;
    cin >> n >> d;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    vector<bool> ok(d, true);
    rep(i, n)
    {
        rep(j, d)
        {
            if (s[i][j] == 'x' && ok[j])
                ok[j] = false;
        }
    }
    int ans = 0, curr = 0;
    rep(i, d)
    {
        if (ok[i])
            curr++;
        else
        {
            ans = max(ans, curr);
            curr = 0;
        }
    }
    ans = max(ans, curr);
    cout << ans << '\n';
    return 0;
}