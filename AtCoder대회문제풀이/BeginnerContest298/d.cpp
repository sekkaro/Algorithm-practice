#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using mint = modint998244353;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    queue<int> qq;
    mint ans = 1;
    qq.push(1);
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int x;
            cin >> x;
            ans = ans * 10 + x;
            qq.push(x);
        }
        else if (t == 2)
        {
            int x = qq.front();
            qq.pop();
            ans -= x * mint(10).pow(qq.size());
        }
        else
        {
            cout << ans.val() << '\n';
        }
    }
    return 0;
}