#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

bool solve()
{
    int n;
    cin >> n;
    int N = 2 * n - 2;
    vector<string> s(N);
    rep(i, N) cin >> s[i];
    rep(i, N)
    {
        bool ok = 0;
        rep(j, N)
        {
            if (i == j)
                continue;
            string rs = s[j];
            reverse(rs.begin(), rs.end());
            if (!s[i].compare(s[j]) || !s[i].compare(rs))
                ok = 1;
        }
        if (!ok)
            return false;
    }
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
        if (solve())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}