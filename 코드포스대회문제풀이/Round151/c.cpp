#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)

bool solve()
{
    string s, l, r;
    int m;
    cin >> s >> m >> l >> r;
    int n = s.size();
    int mx = 0;
    rep(i, m)
    {
        int L = l[i] - '0', R = r[i] - '0', nmx = mx;
        for (int j = L; j <= R; j++)
        {
            int curr = mx;
            while (curr < n && s[curr] - '0' != j)
                curr++;
            nmx = max(nmx, curr);
        }
        mx = nmx + 1;
    }
    if (mx > n)
        return true;
    return false;
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