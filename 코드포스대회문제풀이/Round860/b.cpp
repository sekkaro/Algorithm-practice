#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

const int N = 50001;

bool solve()
{
    int m;
    cin >> m;
    vector<vector<int>> a(m);
    vector<int> cnt(N);
    rep(i, m)
    {
        int n;
        cin >> n;
        rep(j, n)
        {
            int x;
            cin >> x;
            a[i].push_back(x);
            cnt[x]++;
        }
    }
    vector<int> ans(m);
    int ok = 0;
    rep(i, m)
    {
        ok = 0;
        rep(j, a[i].size())
        {
            cnt[a[i][j]]--;
            if (!cnt[a[i][j]])
            {
                ans[i] = a[i][j];
                ok = 1;
            }
        }
        if (!ok)
            return false;
    }
    rep(i, m) cout << ans[i] << ' ';
    cout << '\n';
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        if (!solve())
            cout << "-1\n";
    }
    return 0;
}