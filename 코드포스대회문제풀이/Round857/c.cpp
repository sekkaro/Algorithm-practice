#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

const int N = 2 << 8;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> a(N, vector<int>(N));
    int now = 0;
    for (int i = 0; i < N; i += 2)
    {
        for (int j = 0; j < N; j += 2)
        {
            a[i][j] = now;
            a[i][j + 1] = now + 1;
            a[i + 1][j] = now + 2;
            a[i + 1][j + 1] = now + 3;
            now += 4;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        cout << n * m << '\n';
        rep(i, n)
        {
            rep(j, m) cout << a[i][j] << ' ';
            cout << '\n';
        }
    }
    return 0;
}