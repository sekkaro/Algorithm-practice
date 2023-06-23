#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> a(n, vector<int>(n));
        rep(i, n) rep(j, n) cin >> a[i][j];
        int cnt = 0;
        rep(i, n) rep(j, n) if (a[i][j] != a[n - i - 1][n - j - 1]) cnt++;
        cnt /= 2;
        if (k >= cnt && ((k - cnt) % 2 == 0 || n % 2 == 1))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}