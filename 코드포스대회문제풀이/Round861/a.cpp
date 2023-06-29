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
        int l, r;
        cin >> l >> r;
        int ans = 0, diff = -1;
        for (int i = l; i <= r; i++)
        {
            int MAX = 0, MIN = INT_MAX, n = i;
            while (n > 0)
            {
                MAX = max(MAX, n % 10);
                MIN = min(MIN, n % 10);
                n /= 10;
            }
            if (MAX - MIN > diff)
            {
                ans = i;
                diff = MAX - MIN;
            }
            if (diff == 9)
                break;
        }
        cout << ans << '\n';
    }
    return 0;
}