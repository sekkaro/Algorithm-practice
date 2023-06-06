#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using P = pair<int, int>;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int w, h, n;
    cin >> w >> h >> n;
    vector<int> p(n), q(n);
    rep(i, n) cin >> p[i] >> q[i];
    int A, B;
    cin >> A;
    vector<int> a(A);
    rep(i, A) cin >> a[i];
    cin >> B;
    vector<int> b(B);
    rep(i, B) cin >> b[i];
    map<P, int> mp;
    rep(i, n)
    {
        int x = lower_bound(a.begin(), a.end(), p[i]) - a.begin();
        int y = lower_bound(b.begin(), b.end(), q[i]) - b.begin();
        mp[P(x, y)]++;
    }
    int m = n, M = 0;
    for (auto p : mp)
    {
        m = min(m, p.second);
        M = max(M, p.second);
    }
    if (mp.size() < (long long)(A + 1) * (B + 1))
        m = 0;
    printf("%d %d\n", m, M);
    return 0;
}