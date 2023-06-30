#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    ll ans = 0;
    rep(i, s.size())
    {
        ans += (ll)pow(26, i) * (s[i] - 'A' + 1);
    }
    cout << ans << '\n';
    return 0;
}