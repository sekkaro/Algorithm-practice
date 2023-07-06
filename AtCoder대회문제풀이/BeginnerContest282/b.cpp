#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    int ans = 0;
    rep(i, n)
    {
        for (int j = i + 1; j < n; j++)
        {
            int ok = 1;
            rep(k, m)
            {
                if (s[i][k] != 'o' && s[j][k] != 'o')
                {
                    ok = 0;
                    break;
                }
            }
            if (ok)
                ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}