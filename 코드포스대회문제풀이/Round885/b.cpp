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
        vector<int> a(n);
        rep(i, n) cin >> a[i];
        vector<int> last(k + 1, -1), mx1(k + 1), mx2(k + 1);
        rep(i, n)
        {
            int d = (last[a[i]] >= 0) ? i - last[a[i]] - 1 : i;
            if (d > mx1[a[i]])
            {
                mx2[a[i]] = mx1[a[i]];
                mx1[a[i]] = d;
            }
            else if (d > mx2[a[i]])
                mx2[a[i]] = d;
            last[a[i]] = i;
        }
        for (int i = 1; i <= k; i++)
        {
            if (a[n - 1] == i)
                continue;
            int d = n - 1 - last[i];
            if (d > mx1[i])
            {
                mx2[i] = mx1[i];
                mx1[i] = d;
            }
            else if (d > mx2[i])
                mx2[i] = d;
        }
        int ans = INT_MAX;
        for (int i = 1; i <= k; i++)
        {
            ans = min(ans, max(mx1[i] / 2, mx2[i]));
        }
        cout << ans << '\n';
    }
    return 0;
}