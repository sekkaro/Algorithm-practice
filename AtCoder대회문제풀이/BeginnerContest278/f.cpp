#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> S(n);
    rep(i, n) cin >> S[i];
    int n2 = 1 << n;
    vector<vector<bool>> mem(n2, vector<bool>(n)), val(n2, vector<bool>(n));
    auto f = [&](auto f, int s, int p) -> bool
    {
        if (mem[s][p])
            return val[s][p];
        bool res = false;
        rep(i, n)
        {
            if (s >> i & 1)
                continue;
            if (s && S[i][0] != S[p].back())
                continue;
            res |= !f(f, s | 1 << i, i);
        }
        mem[s][p] = true;
        val[s][p] = res;
        return res;
    };
    if (f(f, 0, 0))
        cout << "First\n";
    else
        cout << "Second\n";
    return 0;
}