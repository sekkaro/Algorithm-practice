#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (d < b)
        return -1;
    if (c > a && c - a > d - b)
        return -1;
    if (a == c && b == d)
        return 0;
    return d - b + abs(a + (d - b) - c);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int ans = solve();
        cout << ans << '\n';
    }
    return 0;
}