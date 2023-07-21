#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)

using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n + 1);
        rep1(i, n) cin >> a[i];
        map<int, int> occur, start;
        rep1(i, n) start[a[i]] = 0;
        rep1(i, m)
        {
            int p, v;
            cin >> p >> v;
            occur[a[p]] += i - start[a[p]];
            start.erase(a[p]);
            a[p] = v;
            start[v] = i;
        }
        for (auto p : start)
        {
            occur[p.first] += (m + 1) - p.second;
        }
        ll ans = (ll)n * m * (m + 1);
        for (auto p : occur)
        {
            ans -= (ll)p.second * (p.second - 1) / 2;
        }
        cout << ans << '\n';
    }
    return 0;
}