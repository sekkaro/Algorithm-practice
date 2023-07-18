#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, p, q;
    cin >> n >> p >> q;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int ans = p;
    rep(i, n) ans = min(ans, a[i] + q);
    cout << ans << '\n';
    return 0;
}