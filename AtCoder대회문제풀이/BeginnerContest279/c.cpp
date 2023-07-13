#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w;
    cin >> h >> w;
    vector<string> s(h), t(h);
    rep(i, h) cin >> s[i];
    rep(i, h) cin >> t[i];
    rep(i, h)
    {
        int cnt1 = 0, cnt2 = 0;
        rep(j, w)
        {
            if (s[i][j] == '#')
                cnt1++;
            if (t[i][j] == '#')
                cnt2++;
        }
        if (cnt1 != cnt2)
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}