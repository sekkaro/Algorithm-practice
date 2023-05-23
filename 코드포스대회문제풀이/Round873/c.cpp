#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define M 1000000007LL
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
        vector<ll> a(n), b(n);
        rep(i, n) cin >> a[i];
        rep(i, n) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<ll>());
        ll result = 1;
        rep(i, n)
        {
            int cnt = n - (upper_bound(a.begin(), a.end(), b[i]) - a.begin());
            result = (result * max(cnt - i, 0)) % M;
        }
        cout << result << '\n';
    }
    return 0;
}