#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t, m;
    cin >> n >> t >> m;
    vector<vector<bool>> bad(n, vector<bool>(n));
    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        --a;
        --b;
        bad[a][b] = true;
        bad[b][a] = true;
    }
    vector<vector<int>> teams;
    int ans = 0;
    auto f = [&](auto f, int i) -> void
    {
        if (i == n)
        {
            if (teams.size() == t)
                ans++;
            return;
        }
        rep(j, teams.size())
        {
            bool ok = true;
            for (auto p : teams[j])
            {
                if (bad[i][p])
                    ok = false;
            }
            if (!ok)
                continue;
            teams[j].push_back(i);
            f(f, i + 1);
            teams[j].pop_back();
        }
        teams.push_back(vector<int>(1, i));
        f(f, i + 1);
        teams.pop_back();
    };
    f(f, 0);
    cout << ans << '\n';
    return 0;
}