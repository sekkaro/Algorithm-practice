#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int ax, ay, bx, by, cx, cy;
        cin >> ax >> ay >> bx >> by >> cx >> cy;
        int ans = 1;
        if (ax < bx && ax < cx)
            ans += min(bx, cx) - ax;
        else if (ax > bx && ax > cx)
            ans += ax - max(bx, cx);
        if (ay < by && ay < cy)
            ans += min(by, cy) - ay;
        else if (ay > by && ay > cy)
            ans += ay - max(by, cy);
        cout << ans << '\n';
    }
    return 0;
}