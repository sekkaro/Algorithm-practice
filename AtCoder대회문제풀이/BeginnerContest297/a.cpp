#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, d;
    cin >> n >> d;
    vector<int> t(n);
    rep(i, n) cin >> t[i];
    int ans = -1;
    rep(i, n - 1)
    {
        if (t[i + 1] - t[i] <= d)
        {
            ans = t[i + 1];
            break;
        }
    }
    cout << ans << '\n';
    return 0;
}