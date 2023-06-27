#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> lines(n);
        rep(i, n) cin >> lines[i];
        sort(lines.begin(), lines.end());
        rep(i, m)
        {
            int a, b, c;
            cin >> a >> b >> c;
            int idx = lower_bound(lines.begin(), lines.end(), b) - lines.begin();
            if (idx < n && (ll)(b - lines[idx]) * (b - lines[idx]) < (ll)4 * a * c)
            {
                cout << "YES\n";
                cout << lines[idx] << '\n';
                continue;
            }
            if (idx > 0 && (ll)(b - lines[idx - 1]) * (b - lines[idx - 1]) < (ll)4 * a * c)
            {
                cout << "YES\n";
                cout << lines[idx - 1] << '\n';
                continue;
            }
            cout << "NO\n";
        }
    }
    return 0;
}