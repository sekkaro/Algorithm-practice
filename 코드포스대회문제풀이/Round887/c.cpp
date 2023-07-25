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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        rep(i, n) cin >> a[i];
        ll x = 1;
        int j = 0;
        while (k--)
        {
            while (j < n && a[j] <= x + j)
                j++;
            x += j;
        }
        cout << x << '\n';
    }
    return 0;
}