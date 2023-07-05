#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

const ll INF = 1e18;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int cnt0 = 0, cnt1 = count(s.begin(), s.end(), '1');
        ll ans = INF;
        if (n == 1)
            ans = 0;
        rep(i, n - 1)
        {
            cnt0 += (s[i] == '0');
            cnt1 -= (s[i] == '1');
            int k = cnt0 + cnt1 + (s[i] == '1') + (s[i + 1] == '0');
            ll curr = (n - k) * (1e12 + 1);
            if (s[i] > s[i + 1])
                curr += 1e12;
            ans = min(ans, curr);
        }
        cout << ans << '\n';
    }
    return 0;
}