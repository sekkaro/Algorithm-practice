#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i <= (n); ++i)

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
        vector<int> p(n + 1);
        rep(i, n) cin >> p[i];
        vector<int> idx(n + 1);
        rep(i, n) idx[p[i]] = i;
        if (idx[n] < min(idx[1], idx[2]))
        {
            cout << idx[n] << ' ' << min(idx[1], idx[2]) << '\n';
        }
        else if (idx[n] > max(idx[1], idx[2]))
        {
            cout << idx[n] << ' ' << max(idx[1], idx[2]) << '\n';
        }
        else
        {
            cout << idx[1] << ' ' << idx[1] << '\n';
        }
    }
    return 0;
}