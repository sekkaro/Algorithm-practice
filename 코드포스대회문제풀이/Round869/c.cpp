#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<int> p(n - 1, 0);
    for (int i = 1; i < n - 1; i++)
    {
        p[i] = p[i - 1] + (a[i - 1] >= a[i] && a[i] >= a[i + 1]);
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if (l == r)
        {
            cout << "1\n";
        }
        else
        {
            int ans = (r - l + 1) - (p[r - 1] - p[l]);
            cout << ans << '\n';
        }
    }
    return 0;
}