#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

using ll = long long;
using P = pair<int, int>;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<P> ab(n);
    rep(i, n) cin >> ab[i].first >> ab[i].second;
    sort(ab.rbegin(), ab.rend());
    int ans = INT_MAX;
    ll sum = 0;
    rep(i, n)
    {
        sum += ab[i].second;
        if (i < n - 1 && ab[i].first == ab[i + 1].first)
            continue;
        if (sum <= k)
            ans = min(ans, ab[i].first);
        else
        {
            ans = ab[i].first + 1;
            break;
        }
    }
    if (ans == ab[n - 1].first)
        cout << "1\n";
    else
        cout << ans << '\n';
    return 0;
}