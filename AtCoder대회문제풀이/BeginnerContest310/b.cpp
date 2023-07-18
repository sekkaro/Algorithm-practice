#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

bool solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> p(n), c(n);
    vector<vector<int>> f(n);
    vector<vector<int>> cnt(n, vector<int>(m + 1));
    rep(i, n)
    {
        cin >> p[i] >> c[i];
        f[i] = vector<int>(c[i]);
        rep(j, c[i])
        {
            cin >> f[i][j];
            cnt[i][f[i][j]]++;
        }
    }
    rep(i, n)
    {
        rep(j, n)
        {
            if (p[i] >= p[j])
            {
                bool ok = true;
                rep(k, m)
                {
                    if (cnt[i][k] > cnt[j][k])
                        ok = false;
                }
                if (ok && (p[i] > p[j] || c[j] > c[i]))
                    return true;
            }
        }
    }
    return false;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    if (solve())
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}