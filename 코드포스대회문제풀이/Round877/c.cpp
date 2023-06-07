#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

#define M 1e6 + 5

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a(M, 0);
    a[0] = a[1] = 1;
    for (int i = 2; i < M; i++)
    {
        if (a[i])
            continue;
        for (int j = i * 2; j < M; j += i)
        {
            a[j] = 1;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> ans(n, vector<int>(m));
        if (a[m])
        {
            int num = 1;
            rep(i, n)
            {
                rep(j, m)
                {
                    ans[i][j] = num;
                    num++;
                }
            }
        }
        else if (a[n])
        {
            int num = 1;
            rep(i, m)
            {
                rep(j, n)
                {
                    ans[j][i] = num;
                    num++;
                }
            }
        }
        else
        {
            int num = 1;
            for (int i = 0; i < n; i += 2)
            {
                rep(j, m)
                {
                    ans[i][j] = num;
                    num++;
                }
            }
            for (int i = 1; i < n; i += 2)
            {
                rep(j, m)
                {
                    ans[i][j] = num;
                    num++;
                }
            }
        }
        rep(i, n)
        {
            rep(j, m)
            {
                cout << ans[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}