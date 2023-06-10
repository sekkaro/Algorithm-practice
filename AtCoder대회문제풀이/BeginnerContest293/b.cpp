#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<int> cnt(n + 1, 0), chk(n + 1, 0);
    rep(i, n)
    {
        if (!cnt[i + 1])
        {
            chk[a[i]]++;
            cnt[a[i]]++;
        }
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if (!chk[i])
            ans.push_back(i);
    }
    cout << ans.size() << '\n';
    rep(i, ans.size()) cout << ans[i] << ' ';
    cout << '\n';
    return 0;
}