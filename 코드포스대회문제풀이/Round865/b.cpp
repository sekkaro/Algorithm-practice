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
        int n;
        cin >> n;
        vector<vector<int>> ans(2, vector<int>(n));
        int a = 2 * n, b = n, i = 0, j = n - 1;
        while (i < j)
        {
            ans[i % 2][i] = a--;
            ans[j % 2][j] = a--;
            ans[(i + 1) % 2][i] = b--;
            ans[(j + 1) % 2][j] = b--;
            i++;
            j--;
        }
        rep(i, 2)
        {
            rep(j, n)
            {
                cout << ans[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}