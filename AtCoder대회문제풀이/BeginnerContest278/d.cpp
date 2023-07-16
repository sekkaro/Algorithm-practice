#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    int q;
    cin >> q;
    int all = -1;
    set<int> s;
    rep(qi, q)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int x;
            cin >> x;
            all = x;
            s.clear();
        }
        else if (t == 2)
        {
            int i, x;
            cin >> i >> x;
            --i;
            if (!s.count(i) && all >= 0)
            {
                a[i] = all;
            }
            a[i] += x;
            s.insert(i);
        }
        else
        {
            int i;
            cin >> i;
            --i;
            if (!s.count(i) && all >= 0)
                cout << all << '\n';
            else
                cout << a[i] << '\n';
        }
    }
    return 0;
}