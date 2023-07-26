#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

using P = pair<int, int>;

int di[] = {-1, 0, 0, 1};
int dj[] = {0, 1, -1, 0};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    vector<vector<bool>> visited(n, vector<bool>(m)), passed(n, vector<bool>(m));
    queue<P> q;
    q.emplace(1, 1);
    visited[1][1] = true;
    while (!q.empty())
    {
        auto [i, j] = q.front();
        q.pop();
        rep(v, 4)
        {
            int ni = i, nj = j;
            while (s[ni][nj] == '.')
            {
                passed[ni][nj] = true;
                ni += di[v];
                nj += dj[v];
            }
            ni -= di[v];
            nj -= dj[v];
            if (visited[ni][nj])
                continue;
            visited[ni][nj] = true;
            q.emplace(ni, nj);
        }
    }
    int ans = 0;
    rep(i, n) rep(j, m) if (passed[i][j]) ans++;
    cout << ans << '\n';
    return 0;
}