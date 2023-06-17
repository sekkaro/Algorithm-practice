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
        rep(i, n - 2)
        {
            if (a[i] > a[i + 1])
            {
                ll diff = a[i] - a[i + 1];
                a[i + 1] += diff;
                a[i + 2] += diff;
            }
        }
        for (int i = n - 1; i > 1; i--)
        {
            if (a[i] < a[i - 1])
            {
                ll diff = a[i - 1] - a[i];
                a[i - 1] -= diff;
                a[i - 2] -= diff;
            }
        }
        int ok = 1;
        rep(i, n - 1)
        {
            if (a[i] > a[i + 1])
            {
                ok = 0;
                break;
            }
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}