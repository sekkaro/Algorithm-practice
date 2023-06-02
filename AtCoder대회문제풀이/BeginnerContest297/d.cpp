#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b;
    cin >> a >> b;
    ll ans = 0;
    while (a % b != 0 && b % a != 0)
    {
        if (a < b)
        {
            ans += (b / a);
            b = b % a;
        }
        else
        {
            ans += (a / b);
            a = a % b;
        }
    }
    if (a != b)
    {
        if (a < b)
            ans += (b / a) - 1;
        else
            ans += (a / b) - 1;
    }
    cout << ans << '\n';
    return 0;
}