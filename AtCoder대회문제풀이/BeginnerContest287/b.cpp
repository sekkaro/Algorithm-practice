#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<string> s(n), t(m);
    rep(i, n) cin >> s[i];
    rep(i, m) cin >> t[i];
    int ans = 0;
    rep(i, n)
    {
        rep(j, m)
        {
            if (s[i].substr(3).compare(t[j]) == 0)
            {
                ans++;
                break;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}