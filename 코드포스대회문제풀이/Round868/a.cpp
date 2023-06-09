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
        vector<int> a(n, 1);
        int ok = 0;
        rep(ni, n + 1)
        {
            if (ni > 0)
                a[ni - 1] = -1;
            int res = 0;
            rep(i, n)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (a[i] * a[j] == 1)
                        res++;
                }
            }
            if (k == res)
            {
                ok = 1;
                break;
            }
        }
        if (ok)
        {
            cout << "YES\n";
            rep(i, n) cout << a[i] << ' ';
            cout << '\n';
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}