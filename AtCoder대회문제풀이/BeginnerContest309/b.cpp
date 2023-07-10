#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> a(n);
    rep(i, n) cin >> a[i];
    vector<string> b = a;
    rep(i, n) rep(j, n)
    {
        if (j == 0 && i > 0)
            b[i - 1][j] = a[i][j];
        else if (j == n - 1 && i < n - 1)
            b[i + 1][j] = a[i][j];
        else if (i == 0)
            b[i][j + 1] = a[i][j];
        else if (i == n - 1)
            b[i][j - 1] = a[i][j];
    }
    rep(i, n)
    {
        rep(j, n) cout << b[i][j];
        cout << '\n';
    }
    return 0;
}