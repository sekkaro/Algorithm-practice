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
        int ans = 1, curr = a[0];
        for (int i = 0; i < n; i++)
        {
            curr &= a[i];
            if (curr == 0)
            {
                if (i >= n - 1)
                    break;
                curr = a[i + 1];
                ans++;
            }
        }
        if (curr != 0)
            ans--;
        cout << max(ans, 1) << '\n';
    }
    return 0;
}