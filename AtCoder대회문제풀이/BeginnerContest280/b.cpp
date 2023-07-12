#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> s(n);
    rep(i, n) cin >> s[i];
    vector<ll> ans(n);
    ll sum = 0;
    rep(i, n)
    {
        ans[i] = s[i] - sum;
        sum += ans[i];
    }
    rep(i, n) cout << ans[i] << ' ';
    cout << '\n';
    return 0;
}