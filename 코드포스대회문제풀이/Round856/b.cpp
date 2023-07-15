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
        rep(i, n) if (a[i] == 1) a[i]++;
        rep(i, n - 1)
        {
            while (a[i + 1] % a[i] == 0)
            {
                a[i + 1]++;
            }
        }
        rep(i, n) cout << a[i] << ' ';
        cout << '\n';
    }
    return 0;
}