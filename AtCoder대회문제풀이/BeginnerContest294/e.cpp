#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll L;
    vector<int> N(2);
    cin >> L >> N[0] >> N[1];
    vector<pair<ll, P>> events;
    rep(i, 2)
    {
        ll t = 0;
        rep(j, N[i])
        {
            int v;
            ll l;
            cin >> v >> l;
            events.emplace_back(t, P(i, v));
            t += l;
        }
    }
    sort(events.begin(), events.end());
    events.emplace_back(L, P(0, 0));
    vector<int> val(2);
    ll pt = 0, ans = 0;
    for (auto [t, p] : events)
    {
        if (val[0] == val[1])
            ans += t - pt;
        auto [i, v] = p;
        val[i] = v;
        pt = t;
    }
    cout << ans << '\n';
    return 0;
}