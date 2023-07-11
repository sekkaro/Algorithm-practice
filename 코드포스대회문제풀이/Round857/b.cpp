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
        int known = 0, unknown = 0, ans = 0;
        rep(i, n)
        {
            int x;
            cin >> x;
            if (x == 1)
                unknown++;
            else
            {
                known += unknown;
                unknown = 0;
            }
            ans = max(ans, unknown + (known ? known / 2 + 1 : 0));
        }
        cout << ans << '\n';
    }
    return 0;
}