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
        vector<int> a(n);
        rep(i, n) cin >> a[i];
        if (a[n - 1] == 1)
        {
            cout << "NO\n";
        }
        else
        {
            vector<int> ans(n);
            int cnt = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                if (a[i] == 1)
                {
                    cnt++;
                    if (i == 0 || a[i - 1] == 0)
                        ans[n - i - 1] = cnt;
                    else
                        ans[n - i - 1] = 0;
                }
                else
                {
                    ans[n - i - 1] = 0;
                    cnt = 0;
                }
            }
            cout << "YES\n";
            rep(i, n) cout << ans[i] << ' ';
            cout << '\n';
        }
    }
    return 0;
}