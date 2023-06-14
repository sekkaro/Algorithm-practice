#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> f(n + 1);
    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b * a <= n; b++)
        {
            f[a * b]++;
        }
    }
    ll ans = 0;
    for (int i = 1; i < n; i++)
    {
        ans += f[i] * f[n - i];
    }
    cout << ans << '\n';
    return 0;
}