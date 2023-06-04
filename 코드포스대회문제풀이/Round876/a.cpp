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
        vector<int> a(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            int cnt = 0;
            for (int j = 1; j <= i; j++)
            {
                if (a[j])
                    cnt++;
            }
            if (cnt < ceil(1.0 * i / k))
                a[i] = 1;
        }
        for (int i = n; i >= 1; i--)
        {
            int cnt = 0;
            for (int j = n; j >= i; j--)
            {
                if (a[j])
                    cnt++;
            }
            if (cnt < ceil(1.0 * (n - i + 1) / k))
                a[i] = 1;
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
            if (a[i])
                ans++;
        cout << ans << '\n';
    }
    return 0;
}