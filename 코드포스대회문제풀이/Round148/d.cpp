#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    while (q--)
    {
        ll k;
        cin >> k;
        vector<ll> take;
        for (int i = 0; i < n && k > 0; i++, k--)
        {
            take.push_back(k);
        }
        if (k)
        {
            if (k & 1)
            {
                take.pop_back();
                k++;
            }
            k /= 2;
        }
        auto check = [&](vector<ll> &t, ll mid, ll k) -> bool
        {
            ll cnt = 0;
            int flag = 1;
            rep(i, n)
            {
                if (t[i] < mid)
                {
                    flag = 0;
                    break;
                }
                cnt += t[i] - mid;
            }
            if (!flag)
                return false;
            if (cnt >= k)
                return true;
            return false;
        };
        vector<ll> t = a;
        rep(i, take.size()) t[i] += take[i];
        ll l = *min_element(t.begin(), t.end()) - k, r = *max_element(t.begin(), t.end()) + 1;
        while (l < r - 1)
        {
            ll mid = (l + r) / 2;
            if (check(t, mid, k))
            {
                l = mid;
            }
            else
            {
                r = mid;
            }
        }
        cout << l << ' ';
    }
    return 0;
}