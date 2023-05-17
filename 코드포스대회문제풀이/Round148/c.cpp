#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

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
        vector<ll> a(n);
        rep(i, n) cin >> a[i];
        int inc = 0, dec = 0, ans = 1;
        ll diff = 0;
        rep(i, n - 1)
        {
            if (a[i] > a[i + 1])
            {
                if (inc)
                {
                    ans++;
                    inc = 0;
                }
                dec = 1;
            }
            else if (a[i] < a[i + 1])
            {
                if (dec)
                {
                    ans++;
                    dec = 0;
                }
                inc = 1;
            }
            diff += abs(a[i] - a[i + 1]);
        }
        if (inc || dec)
            ans++;
        if (!diff)
            cout << "1\n";
        else
            cout << ans << '\n';
    }
    return 0;
}