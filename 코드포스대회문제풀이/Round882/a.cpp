#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        k--;
        vector<int> a(n);
        rep(i, n) cin >> a[i];
        vector<int> diff(n - 1);
        rep(i, n - 1) diff[i] = abs(a[i + 1] - a[i]);
        sort(diff.rbegin(), diff.rend());
        int ans = 0;
        for (int i = k; i < n - 1; i++)
            ans += diff[i];
        cout << ans << '\n';
    }
    return 0;
}