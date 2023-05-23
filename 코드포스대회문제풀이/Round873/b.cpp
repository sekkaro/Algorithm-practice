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
        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> p[i];
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int diff = abs(p[i] - i);
            if (diff)
                if (!ans)
                    ans = diff;
            ans = gcd(ans, diff);
        }
        cout << ans << '\n';
    }
    return 0;
}