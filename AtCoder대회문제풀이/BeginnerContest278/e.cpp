#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

const int N = 301;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int H, W, n, h, w;
    cin >> H >> W >> n >> h >> w;
    vector<vector<int>> a(H, vector<int>(W));
    rep(i, H) rep(j, W) cin >> a[i][j];
    set<int> s;
    vector<int> cnt(N);
    rep(i, H) rep(j, W)
    {
        s.insert(a[i][j]);
        cnt[a[i][j]]++;
    }
    rep(i, H - h + 1)
    {
        rep(j, W - w + 1)
        {
            set<int> t = s;
            vector<int> tc = cnt;
            rep(k, h)
            {
                rep(l, w)
                {
                    tc[a[i + k][j + l]]--;
                    if (!tc[a[i + k][j + l]])
                        t.erase(a[i + k][j + l]);
                }
            }
            cout << t.size() << ' ';
        }
        cout << '\n';
    }
    return 0;
}