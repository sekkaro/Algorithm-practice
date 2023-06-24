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
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<vector<ll>> s(k, vector<ll>(n + 1));
    rep(i, n) s[i % k][i + 1] = a[i];
    rep(i, k) rep(j, n) s[i][j + 1] += s[i][j];
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        vector<int> an(k);
        rep(i, k)
        {
            an[i] = s[i][r] - s[i][l - 1];
        }
        sort(an.begin(), an.end());
        if (an[0] == an[k - 1])
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}