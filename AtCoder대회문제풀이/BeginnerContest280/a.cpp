#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w;
    cin >> h >> w;
    int ans = 0;
    vector<string> s(h);
    rep(i, h)
    {
        string s;
        cin >> s;
        rep(j, w) if (s[j] == '#') ans++;
    }
    cout << ans << '\n';
    return 0;
}