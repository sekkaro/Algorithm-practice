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
        vector<int> a(n);
        rep(i, n) cin >> a[i];
        map<int, int> mp;
        rep(i, n)
        {
            int x = a[i];
            for (int j = 2; j * j <= x; j++)
            {
                while (x % j == 0)
                {
                    x /= j;
                    mp[j]++;
                }
            }
            if (x != 1)
                mp[x]++;
        }
        int res = 0, rem = 0;
        for (auto [num, cnt] : mp)
        {
            res += cnt / 2;
            rem += cnt % 2;
        }
        res += rem / 3;
        cout << res << '\n';
    }
    return 0;
}