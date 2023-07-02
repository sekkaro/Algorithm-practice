#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    dsu uf(n);
    rep(i, m)
    {
        int u, v;
        cin >> u >> v;
        --u;
        --v;
        uf.merge(u, v);
    }
    cout << uf.groups().size() << '\n';
    return 0;
}