#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    while (p <= q && r <= s)
    {
        swap(a[p - 1], a[r - 1]);
        p++;
        r++;
    }
    rep(i, n) cout << a[i] << ' ';
    cout << '\n';
    return 0;
}