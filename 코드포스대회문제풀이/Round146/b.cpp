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
        int a, b;
        cin >> a >> b;
        int ans = a + b;
        for (int i = 2; i <= 1e5; i++)
        {
            ans = min(ans, (int)(ceil(1.0 * a / i) + ceil(1.0 * b / i) + i - 1));
        }
        cout << ans << '\n';
    }
    return 0;
}