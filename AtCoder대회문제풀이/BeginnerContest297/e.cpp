#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    set<ll> st;
    auto push = [&](ll x)
    {
        rep(i, n)
        {
            st.insert(x + a[i]);
        }
    };
    push(0);
    rep(i, k - 1)
    {
        ll x = *st.begin();
        st.erase(x);
        push(x);
    }
    ll ans = *st.begin();
    cout << ans << '\n';
    return 0;
}