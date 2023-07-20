#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(7 * n);
    rep(i, 7 * n) cin >> a[i];
    vector<int> ans(n);
    rep(i, 7 * n) ans[i / 7] += a[i];
    rep(i, n) cout << ans[i] << ' ';
    cout << '\n';
    return 0;
}