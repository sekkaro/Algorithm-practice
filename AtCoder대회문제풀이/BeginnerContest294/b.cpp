#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    rep(i, h) rep(j, w) cin >> a[i][j];
    rep(i, h)
    {
        rep(j, w)
        {
            if (!a[i][j])
                cout << '.';
            else
                cout << (char)('A' + a[i][j] - 1);
        }
        cout << '\n';
    }
    return 0;
}