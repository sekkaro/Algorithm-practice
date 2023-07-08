#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<int> b = a;
    sort(b.begin(), b.begin() + m);
    multiset<int> s, g;
    ll sum = 0;
    rep(i, m)
    {
        if (i < k)
        {
            sum += b[i];
            s.insert(b[i]);
        }
        else
            g.insert(b[i]);
    }
    rep(i, n - m + 1)
    {
        if (i > 0)
        {
            if (a[i - 1] <= *s.rbegin())
            {
                sum -= a[i - 1];
                s.erase(s.find(a[i - 1]));
            }
            else
                g.erase(g.find(a[i - 1]));
            g.insert(a[i + m - 1]);
            if (s.size() < k)
            {
                sum += *g.begin();
                s.insert(*g.begin());
                g.erase(g.begin());
            }
            else if (*g.begin() < *s.rbegin())
            {
                sum += *g.begin() - *s.rbegin();
                s.insert(*g.begin());
                g.erase(g.begin());
                g.insert(*s.rbegin());
                s.erase(--s.end());
            }
        }
        cout << sum << ' ';
    }
    return 0;
}