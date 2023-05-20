#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n)), b(n, vector<int>(n));
    rep(i, n)
    {
        rep(j, n)
        {
            cin >> a[i][j];
        }
    }
    rep(i, n)
    {
        rep(j, n)
        {
            cin >> b[i][j];
        }
    }
    int ok = 1;
    rep(ni, 4)
    {
        vector<vector<int>> t = a;
        rep(i, n)
        {
            rep(j, n)
            {
                a[i][j] = t[n - 1 - j][i];
            }
        }
        ok = 1;
        rep(i, n)
        {
            rep(j, n)
            {
                if (a[i][j] == 1 && b[i][j] == 0)
                    ok = 0;
            }
        }
        if (ok)
            break;
    }
    if (ok)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}