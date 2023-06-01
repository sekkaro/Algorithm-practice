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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        rep(i, n) cin >> a[i];
        rep(i, n) cin >> b[i];
        vector<int> ac(2 * n + 1, 0), bc(2 * n + 1, 0);
        int cnta = 1;
        rep(i, n - 1)
        {
            if (a[i] == a[i + 1])
                cnta++;
            else
            {
                ac[a[i]] = max(ac[a[i]], cnta);
                cnta = 1;
            }
        }
        ac[a[n - 1]] = max(ac[a[n - 1]], cnta);
        int cntb = 1;
        rep(i, n - 1)
        {
            if (b[i] == b[i + 1])
                cntb++;
            else
            {
                bc[b[i]] = max(bc[b[i]], cntb);
                cntb = 1;
            }
        }
        bc[b[n - 1]] = max(bc[b[n - 1]], cntb);
        int ans = 0;
        rep(i, 2 * n + 1)
        {
            ans = max(ans, ac[i] + bc[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}