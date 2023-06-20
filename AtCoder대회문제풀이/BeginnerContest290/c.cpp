#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    set<int> s;
    int ans = 0;
    rep(i, n)
    {
        if (a[i] == ans)
            ans++;
        s.insert(a[i]);
        if (s.size() == k)
            break;
    }
    cout << ans << '\n';
    return 0;
}