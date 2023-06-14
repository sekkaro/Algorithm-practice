#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using P = pair<int, int>;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<P> uv;
    rep(i, m)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        uv.emplace_back(u, v);
    }
    dsu uf(n);
    for (auto [u, v] : uv)
    {
        uf.merge(u, v);
    }
    vector<int> numV(n), numE(n);
    rep(V, n)
        numV[uf.leader(V)]++;
    for (auto [u, v] : uv)
    {
        numE[uf.leader(u)]++;
    }
    rep(i, n)
    {
        if (numV[i])
        {
            if (numV[i] != numE[i])
            {
                cout << "No\n";
                return 0;
            }
        }
    }
    cout << "Yes\n";
    return 0;
}