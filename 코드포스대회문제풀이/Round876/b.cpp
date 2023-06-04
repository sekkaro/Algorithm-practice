#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using P = pair<int, int>;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<P> lamps(n);
        rep(i, n)
        {
            int a, b;
            cin >> a >> b;
            lamps[i] = {a, b};
        }
        sort(lamps.begin(), lamps.end(), [](const auto &l, const auto &r)
             { return l.second > r.second; });
        vector<int> chk(n + 1);
        rep(i, n + 1)
        {
            chk[i] = i;
        }
        ll ans = 0;
        rep(i, n)
        {
            int a = lamps[i].first, b = lamps[i].second;
            if (chk[a])
            {
                ans += b;
                chk[a]--;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}