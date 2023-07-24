#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    int ans = 0;
    rep(i, n)
    {
        int p;
        cin >> p;
        if (p == x)
            ans = i + 1;
    }
    cout << ans << '\n';
    return 0;
}