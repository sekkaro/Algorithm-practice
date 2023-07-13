#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int ans = 0;
    rep(i, s.size())
    {
        if (s[i] == 'w')
            ans += 2;
        else
            ans++;
    }
    cout << ans << '\n';
    return 0;
}