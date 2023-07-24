#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

string pre = "HDCS", suf = "A23456789TJQK";

bool solve()
{
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    rep(i, n)
    {
        bool ok = false;
        rep(j, pre.size()) if (s[i][0] == pre[j]) ok = true;
        if (!ok)
            return false;
        ok = false;
        rep(j, suf.size()) if (s[i][1] == suf[j]) ok = true;
        if (!ok)
            return false;
    }
    rep(i, n)
    {
        rep(j, n)
        {
            if (i == j)
                continue;
            if (s[i] == s[j])
                return false;
        }
    }
    return true;
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