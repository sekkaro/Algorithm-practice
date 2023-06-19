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
        int sum = 0, cnt = 0;
        rep(i, n)
        {
            sum += a[i];
            if (a[i] < 0)
                cnt++;
        }
        int ans = 0;
        if (sum < 0)
        {
            ans += ceil(1.0 * -sum / 2);
            cnt -= ans;
        }
        if (cnt % 2 != 0)
        {
            ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}